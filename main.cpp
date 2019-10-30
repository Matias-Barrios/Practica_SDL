
#include <iostream>
#include <SDL2/SDL.h>
#include "include/Game.h"

using namespace std;

int main() {
    Game *my_game = new Game();

    my_game -> init(10,10,800,600,false, (char *) "Mi juego");

    while (my_game ->running()) {
        my_game -> draw();
    }
    my_game -> quit();
    return 0;
}
