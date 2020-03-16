#include "rendererLevel1.h"
#include <iostream>
#include <string>


void RendererLevel1::Render(Snake const snake, SDL_Point const &food) {

    // Clear screen
    SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
    SDL_RenderClear(sdl_renderer);

    // Render food 
    RenderFood(food);   

    // Render snake's body
    RenderBody(snake);

    // Render snake's head
    RenderHead(snake);

    SDL_UpdateWindowSurface( sdl_window );
    SDL_RenderPresent(sdl_renderer);
   
}

bool RendererLevel1::collision(Snake snake){return false;}
bool RendererLevel1::ObstacleCell(int x, int y){return false;}


