#include <iostream>
#include <cmath>
#include "SDL3/SDL.h"
#include "SDL3_image/SDL_image.h"

int main(){
    std::cout << "Hello, from calcu_sdl3!\n";

    SDL_Window* window;
    SDL_Renderer* renderer; 

    SDL_CreateWindowAndRenderer("Calculator",640,480,SDL_WINDOW_OPENGL,&window, &renderer);

    bool running = true;
    SDL_Event e;

    while(running)
    {
        while(SDL_PollEvent(&e))
        {
            if(e.type == SDL_EVENT_QUIT) {
                running = false;
            }
            if(e.key.key == SDLK_ESCAPE) {
                std::cout << "ESC button pressed. Exiting... \n";
                running = false;
            }
        }

        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    SDL_DestroyWindow(window);
    SDL_Quit;

   
}
