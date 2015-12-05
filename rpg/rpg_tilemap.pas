unit rpg_tilemap;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, contnrs;



type

  { TTileMapTile }

  TTileMapTile = record
    sht_index: Byte;
    sht_tile: Byte;
    water: Boolean;
  end;

  ETileMapObjTypes = (
      Container,
      Activator,
      Animation,
      Actor,
      Warp,
  );

  { TTileMapObjWarpArg }

  TTileMapObjWarpArg = record

  end;

  { TTileMapObjActivatorArg }

  TTileMapObjActivatorArg = record

  end;

  { TTileMapObjContainerEntry }

  TTileMapObjContainerEntry = class

  end;

  TTileMapObj = class
    public
      constructor Create;
      destructor Destroy;

    private
      _type: ETileMapObjTypes;
      _containerEntries: TObjectList;
      _warpArgs: TTileMapObjWarpArg;
      _activatorArgs: TTileMapObjActivatorArg;
  end;

  TTileMap = class
    public
    private
      _tiles: TObjectList;
      _objs: TObjectList;
  end;

implementation

{ TTileMapObj }

constructor TTileMapObj.Create;
begin

end;

destructor TTileMapObj.Destroy;
begin

end;

end.

