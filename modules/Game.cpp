#include "Game.h"
#include <SDL2/SDL.h>

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}


bool Game::init(int x, int y, int WIN_WIDTH, int WIN_HEIGHT,bool fullscreen, char* title){

        SDL_Init(SDL_INIT_VIDEO);

	    if ((  window = SDL_CreateWindow(title,x,y,WIN_WIDTH,WIN_HEIGHT,SDL_WINDOW_OPENGL) ) == NULL) {
	        printf("Could not create window: %s\n", SDL_GetError());
	        return false;
	    }
	    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        backgroundimage = SDL_LoadBMP("resources/space.bmp");
        backgroundtexture = SDL_CreateTextureFromSurface(renderer, backgroundimage);
        SDL_FreeSurface(backgroundimage);

        return 0;

}
SDL_Renderer *Game::getRenderer(){
    return renderer;
}
void Game::draw(){
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, backgroundtexture, NULL, NULL);
        SDL_RenderPresent(renderer);

}
bool Game::running(){
    SDL_Event e;
    SDL_PollEvent(&e);
    if (e.type == SDL_QUIT)
                return false;

    return true;
}
void Game::quit(){

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();

}

