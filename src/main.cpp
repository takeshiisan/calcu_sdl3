#include <iostream>
#include <cmath>
#include "SDL3/SDL.h"
#include "SDL3_image/SDL_image.h"

int main(){
    std::cout << "Hello, from calcu_sdl3!\n";

    SDL_Window* window;
    SDL_Renderer* renderer; 

    SDL_CreateWindowAndRenderer("Calculator",640,480,SDL_WINDOW_OPENGL,&window, &renderer);

}
