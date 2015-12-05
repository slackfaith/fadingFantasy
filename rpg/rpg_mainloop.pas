unit rpg_mainloop;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,

  rpg_fpscounter, SDL_app;

type

  { TMainLoop }

  TMainLoop = class
    public
      procedure Run;
      procedure Exit;
    private
      _fpsCounter: TFpsCounter;
      _done: Boolean;
  end;

implementation

{ TMainLoop }

procedure TMainLoop.Run;
begin

end;

procedure TMainLoop.Exit;
begin

end;

end.

