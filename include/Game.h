#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>

class Game
{
    public:
        Game();
        virtual ~Game();
        bool init(int x, int y, int WIN_WIDTH, int WIN_HEIGHT,bool fullscreen, char* title);
        void draw();
        void quit();


    protected:

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        bool running;
};


#endif // GAME_H
