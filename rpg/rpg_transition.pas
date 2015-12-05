unit rpg_transition;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils;


type

  { TTransition }

  TTransition = class

  end;

  { TTransitionFADE }

  TTransitionFADE = class(TTransition)

  end;

  { TTransitionFADEin }

  TTransitionFADEin = class(TTransitionFADE)

  end;

  { TTransitionFADEout }

  TTransitionFADEout = class(TTransitionFADE)

  end;

implementation

end.

