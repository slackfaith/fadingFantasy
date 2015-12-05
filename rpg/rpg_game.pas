unit rpg_game;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,
  rpg_mainloop, rpg_session,

  SDL_app;

type

  { TGame }

  TGame = class
    public

      procedure Run;
    private
      _mainloop: TMainLoop;
      _session: TSession;
  end;

implementation

{ TGame }

procedure TGame.Run;
begin

end;

end.

