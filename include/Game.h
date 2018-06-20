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
        bool running();


    protected:

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        SDL_Texture *backgroundtexture = NULL;
        SDL_Surface *backgroundimage = NULL;

};


#endif // GAME_H
