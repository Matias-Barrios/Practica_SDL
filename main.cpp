
#include <iostream>
#include <SDL2/SDL.h>
#include "Game.h"


int main() {
    Game *my_game = new Game();

    my_game -> init(10,10,800,600,false,"Mi juego");
    SDL_Delay(3000);
    my_game -> quit();
    return 0;
}
