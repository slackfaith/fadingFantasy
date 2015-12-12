#ifndef RPG_COMBAT_H
#define RPG_COMBAT_H

#include "rpg_battler.h"
#include "rpg_monster.h"
#include "rpg_hero.h"
#include "rpg_item.h"
#include "rpg_command.h"

#include <string>
#include <vector>

#define COMBAT_VER_MAJ 0
#define COMBAT_VER_MIN 0
#define COMBAT_VER_REV 0

enum rpg_combatEndType {
    WIN,
    LOSE,
    FLEE
};

struct rpg_combatReward{
};

class rpg_combat
{
    public:
        rpg_combat();
        virtual ~rpg_combat();

        void init();
        void update();
    private:
        std::vector<rpg_battler*>
        _battlers;
        std::vector<rpg_encounter*>
         _encounter;
        std::vector<rpg_hero*>
         _heros;

         rpg_combatEndType _endtype;
         int _turn;
};

#endif // RPG_COMBAT_H
