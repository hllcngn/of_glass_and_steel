#include "ogns.h"

void clear_window(SDL_Renderer* renderer, SDL_Color color){
SDL_SetRenderDrawColor(renderer, color.r,color.g,color.b,color.a);
SDL_RenderClear(renderer);	return;}
