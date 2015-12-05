unit SDL_app;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,
  sdl, sdl_image, sdl_gfx, sdl_mixer, sdl_ttf;

var
  screen: PSDL_Surface;
  done: Boolean;
  event: PSDL_Event;

function SDL_TEST: integer;

implementation

function SDL_TEST: integer;
begin
  if SDL_Init( SDL_INIT_VIDEO ) < 0 then HALT;

  screen:= SDL_SetVideoMode(800, 600, 24, SDL_HWSURFACE or SDL_DOUBLEBUF);
  done:= false;

  new(event);

  while (not done) do begin
     if SDL_PollEvent(event) = 1 then
     begin
          case event^.type_ of
               SDL_QUITEV: done:= true;
               SDL_KEYDOWN: begin
                 if event^.key.keysym.sym = SDLK_ESCAPE then
                 begin
                      done:= true;
                 end;
               end;
          end;
     end;
     SDL_Flip(screen);
     SDL_Delay(1);
  end;

  Dispose(event);
  SDL_Quit;
  Result:=0;
end;

end.

