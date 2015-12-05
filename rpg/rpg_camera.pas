unit rpg_camera;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;

type


  { TCameraPoint }

  TCameraPoint = record
    posX: Single;
    posY: Single;
  end;

  { TCamera }

  TCamera = class
    public

      procedure Move(x,y: Single);
      procedure Move(p: TCameraPoint);
    private
      _pos: TCameraPoint;
      _size: TCameraPoint;
  end;

implementation

{ TCamera }

procedure TCamera.Move(x, y: Single);
begin

end;

procedure TCamera.Move(p: TCameraPoint);
begin

end;

end.

