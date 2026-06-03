#include "Quoridor.h"

void Quoridor::start()
{
    const int ScreenHeight = 500, ScreenWidth = 500,
            MAXX = 24, MINX = 0, MAXY = 24, MINY = 0,
            playerHeight = 2, playerWidth = 2;
    const std::string black = "./assets/img/bbox.png";
    const std::string blue = "./assets/img/blueX.png";
    //declare sprites : texture, (x,y), (width,height)
    std::shared_ptr<Sprite> player1 = std::make_shared<Sprite>(
            black, MAXX / 2, MINY, playerWidth, playerHeight);
    std::shared_ptr<Sprite> player2 = std::make_shared<Sprite>(
            blue, MAXX / 2, MAXY - playerHeight, playerWidth, playerHeight);
    std::shared_ptr<Sprite> player1Goal = std::make_shared<Sprite>(
            black, MINX, MAXY - 1, MAXX, 1);
    std::shared_ptr<Sprite> player2Goal = std::make_shared<Sprite>(
            blue, MINX, MINY, MAXX, 1);

    //open a window via the build-time backend (SDL2, SFML, ...)
    std::shared_ptr<Backend> backend = createDefaultBackend();
    Platform platform = backend->create(ScreenWidth, ScreenHeight, "Quoridor");
    std::shared_ptr<AbstractRenderer> sr = platform.renderer;
    std::shared_ptr<AbstractInputWrapper> in = platform.input;

    //declare visitors (grid drawing maps board coords -> pixels)
    std::shared_ptr<GridDrawingVisitor> draw = std::make_shared<GridDrawingVisitor>(MAXX, MAXY, sr);

    //declare game engine
    std::shared_ptr<GameEngine> ge = std::make_shared<GameEngine>();

    //add sprites to scene
    ge->addSprite(player1Goal);
    ge->addSprite(player2Goal);
    ge->addSprite(player1);
    ge->addSprite(player2);

    //gotta add the drawing visitor last
    ge->addVisitor(draw);

    //backend-neutral stopwatch
    Clock tick;

    // Clamp a board coordinate so pawns stay on the grid.
    auto clamp = [](double v, double hi) { return v < 0 ? 0 : (v > hi ? hi : v); };

    //start the game: a two-player race to the opposite row.
    //  Player 1 (black) uses the arrow keys; Player 2 (blue) uses WASD.
    bool playing = true;
    while (draw->isOpen() && playing)
    {
        frameYield(16); // browser: yield to the event loop; native: no-op
        if (tick.getElapsedMilliseconds() > 90) {
            tick.restart();
            std::vector<Key> keys = in->getKeyPresses();
            double p1x = player1->getX(), p1y = player1->getY();
            double p2x = player2->getX(), p2y = player2->getY();
            for (Key &key : keys) {
                switch (key) {
                    case Key::Left:  p1x -= 1; break;
                    case Key::Right: p1x += 1; break;
                    case Key::Up:    p1y -= 1; break;
                    case Key::Down:  p1y += 1; break;
                    case Key::A:     p2x -= 1; break;
                    case Key::D:     p2x += 1; break;
                    case Key::W:     p2y -= 1; break;
                    case Key::S:     p2y += 1; break;
                    default: break;
                }
            }
            player1->setXY(clamp(p1x, MAXX - playerWidth), clamp(p1y, MAXY - playerHeight));
            player2->setXY(clamp(p2x, MAXX - playerWidth), clamp(p2y, MAXY - playerHeight));

            // Win check: reach the opposite edge row.
            if (player1->getY() >= MAXY - playerHeight) {
                std::cout << "Player 1 reaches the far side. Player 1 wins!" << std::endl;
                playing = false;
            } else if (player2->getY() <= MINY) {
                std::cout << "Player 2 reaches the far side. Player 2 wins!" << std::endl;
                playing = false;
            }
        }
        ge->update();
        draw->draw();
    }
    std::cout << "QUORIDOR CLOSED" << std::endl;
}
