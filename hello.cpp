#include "./classes/games/Quoridor.h"
int main(){
    std::shared_ptr<Game> g = std::make_shared<Quoridor>();
    g->start();
}