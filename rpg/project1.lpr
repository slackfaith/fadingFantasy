program project1;

uses

  sdl, sdl_image, sdl_gfx, sdl_mixer, sdl_ttf,

  {$IFDEF HAS_TYPES}
    Types{$IFNDEF NDS},
  {$ENDIF}

  {$IFDEF WINDOWS}
    Windows,
  {$ENDIF}

  {$IFDEF UNIX}
    {$IFDEF FPC}
    pthreads,
    unixtype,
    baseunix,
    {$IFNDEF GP2X}
    unix,
    {$ELSE}
    unix,
    {$ENDIF}
    {$IFNDEF GP2X}
    x,
    xlib
    {$ENDIF}
    {$ELSE}
    Libc,
    Xlib,
    {$ENDIF}
  {$ENDIF}
 {$ENDIF}

  rpg_ability, rpg_actor, rpg_animation, rpg_audio, rpg_battler,
  rpg_camera, rpg_combat, rpg_command, rpg_dialog, rpg_dice,
  rpg_encounter, rpg_event, rpg_fpscounter, rpg_game, rpg_hero,
  rpg_input, rpg_item, rpg_lua, rpg_mainloop, rpg_manager,
  rpg_monster, rpg_particle, rpg_scene, rpg_session, rpg_sprite,
  rpg_tilemap, rpg_transition, rpg_version, SDL_app;


var
  screen: PSDL_Surface;
  done: Boolean;
  event: PSDL_Event;

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

end.

