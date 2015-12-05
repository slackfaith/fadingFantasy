unit rpg_command;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;


type

  ECommandTypes = (
      ABILITY,
      ITEM,
      DEFEND,
      FLEE,

      TRANSFORM,
      SUMMON,
      BLOOD_MAGICK,
      TIME_MAGICK,
      MEDITATE,
      WILL
  );

  { TCommand }

  TCommand = class
    public
    private
      _type: ECommandTypes;
      _name: string;
  end;

implementation

end.

