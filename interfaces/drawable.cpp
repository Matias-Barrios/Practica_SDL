 #include <vector>
 #include <SDL2/SDL.h>

class Drawable {

    public:
        int x;
        int y;
        int width;
        int height;
        std::vector<SDL_Texture*> sprites;
        
};