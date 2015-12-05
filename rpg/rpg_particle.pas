unit rpg_particle;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, contnrs;

type

  { TParticle2DfloatVec }

  TParticle2DfloatVec = record
        PosX: Single;
        PosY: Single;
  end;

  { TRpgParticleEmitterPos }

  TRpgParticleEmitterPos = record
      PosX: Integer;
      PosY: Integer;
  end;

  { TParticle }

  TParticle = record
      Pos: TParticle2DfloatVec;
      Vel: TParticle2DfloatVec;
      life: Single;
      lifeMax: Single;
      Dead: Boolean;
  end;

  { TParitcleEmitter }

  TParitcleEmitter = class
    private;
      _particles: TObjectList;
      _position: TParticleEmitterPos;
    public;
       constructor Create;
       destructor Destroy;

       procedure Emit;
       procedure Update;
       procedure Move(x,y: Integer);
  end;

  { TParticleManipulator }

  TParticleManipulator = class

  end;

implementation

{ TParitcleEmitter }

constructor TParitcleEmitter.Create;
begin

end;

destructor TParitcleEmitter.Destroy;
begin

end;

procedure TParitcleEmitter.Emit;
var
  p: TParticle;
begin
  _particles.Add(p);
end;

procedure TParitcleEmitter.Update;
var
  itr: TObject;
  p: TParticle;
begin
  for itr in _particles do
  begin
    p:= (itr as TParticle);
    if not p.Dead then do
    begin

    end;
  end;
end;

procedure TParitcleEmitter.Move(x, y: Integer);
begin
  _position.PosX:= _position.PosX + x;
  _position.PosY:= _position.PosY + y;
end;

end.

