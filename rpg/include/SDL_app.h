#ifndef SDL_APP_H
#define SDL_APP_H

#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_gfxBlitFunc.h>
#include <SDL/SDL_imageFilter.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_rotozoom.h>

static SDL_Surface* SDLapp_screen;
static SDL_Event SDLapp_event;

int SDLapp_init();
int SDLapp_deinit();
void SDLapp_flip();
void SDLapp_print();
bool SDLapp_iskeydown(SDLKey key);

int SDL_TEST();

#endif // SDL_APP_H
