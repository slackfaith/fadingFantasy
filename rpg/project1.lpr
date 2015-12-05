program project1;
{$mode objfpc}{$H+}

uses
 rpg_version, SDL_app,
  sysutils, lua, lauxlib, lualib;

{$R *.res}

begin
  WriteLn('GAME: ' + VersionString);
  SDL_TEST;
end.

