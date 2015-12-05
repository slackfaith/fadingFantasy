unit rpg_sprite;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, contnrs,
   SDL_app, sdl, sdl_image, sdl_gfx;

type

   { TSpriteHitRect }

   TSpriteHitRect = record
     width: Integer;
     height: Integer;
     posX: Integer;
     posY: Integer;
   end;

   { TSpritePos }

   TSpritePos = record
      posX: Integer;
      posY: Integer;
   end;

   { TSprite }

   TSprite = class
     public

       procedure Move(x,y: Integer);
     protected
       _position: TSpritePos;
       _surface: PSDL_Surface;
       _hitrects: TObjectList;
       _dead: Boolean;
   end;

implementation

{ TSprite }

procedure TSprite.Move(x, y: Integer);
begin

end;

end.

