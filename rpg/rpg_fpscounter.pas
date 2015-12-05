unit rpg_fpscounter;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;

const
  MAX_FPS = 60;

type

  { TFpsCounter }

  TFpsCounter = class
    public

      procedure Update;
    private
      _fps: Integer;
      _ftime: Single;
  end;

implementation

{ TFpsCounter }

procedure TFpsCounter.Update;
begin

end;

end.

