unit rpg_version;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;

const
  VER_MIN= 0;
  VER_MAJ= 0;
  VER_REV= 0;
  VER_TAG= 'LOLOLOL';

function VersionString: string;

implementation

function VersionString: string;
begin
  Result:= '';
end;

end.

