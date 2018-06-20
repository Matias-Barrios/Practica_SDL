#include "Game.h"


Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}


bool Game::init(int x, int y, int WIN_WIDTH, int WIN_HEIGHT,bool fullscreen, char* title){

		  // Declare a pointer


	    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

	    // Create an application window with the following settings:
	    window = SDL_CreateWindow(
	    	title,                  // window title
	        x,           // initial x position
	        y,           // initial y position
			WIN_WIDTH,                               // width, in pixels
			WIN_HEIGHT,                               // height, in pixels
	        SDL_WINDOW_OPENGL                  // flags - see below
	    );

	    // Check that the window was successfully created
	    if (window == NULL) {
	        // In the case that the window could not be made...
	        printf("Could not create window: %s\n", SDL_GetError());
	        return false;
	    }
	    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);



	    return 0;

}
void Game::draw(){

}
void Game::quit(){

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();

}

