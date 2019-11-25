#include "./classes/games/Pong.h"
int main(){
    std::shared_ptr<Game> g = std::make_shared<Pong>();
    g->start();
}