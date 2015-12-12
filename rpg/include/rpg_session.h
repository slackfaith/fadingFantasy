#ifndef RPG_SESSION_H
#define RPG_SESSION_H


#include "rpg_item.h"
#include "rpg_hero.h"
#include "rpg_tilemap.h"
#include "rpg_event.h"


#include <string>
#include <vector>
#include <iostream>

struct rpg_sessionTime{
unsigned short
days, hour, secs;
};

struct rpg_sessionMonsterKill{

};

class rpg_session
{
    public:
        rpg_session();
        virtual ~rpg_session();
    private:
        rpg_sessionTime _time;
        std::vector<rpg_sessionMonsterKill*>
        _monsterkills;
};

#endif // RPG_SESSION_H
