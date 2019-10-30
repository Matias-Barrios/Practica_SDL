 #include <vector>
 #include <SDL2/SDL.h>
 #include <string>

class Drawable {

    public:
        int x;
        int y;
        int width;
        int height;
        std::vector<SDL_Texture*> sprites;
        virtual void load(std::string file...);
};
