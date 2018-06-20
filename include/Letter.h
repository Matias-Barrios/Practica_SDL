#ifndef LETTER_H
#define LETTER_H
#include <SDL2/SDL.h>

class Letter
{
    public:
        Letter();
        virtual ~Letter();
        void draw(SDL_Renderer *renderer);
        static const int WIDTH  = 0;
        static const int HEIGHT = 0;

    protected:

    private:
        char value = 'a';
        int pos_x = 0, pos_y = 0 ;
        SDL_Surface *backgroundimage = NULL;


};

#endif // LETTER_H
