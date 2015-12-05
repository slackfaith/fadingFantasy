unit rpg_lua;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils,
  lua, lualib, lauxlib;


type

  { TLuaManager }

  TLuaManager = class
    private
      L: Plua_State;
    public
  end;

  { TLuaScript }

  TLuaScript = class

  end;

implementation

end.

