#ifndef RPG_MONSTER_H
#define RPG_MONSTER_H

#include "rpg_battler.h"
#include "rpg_item.h"
#include "rpg_ability.h"
#include "rpg_types.h"


struct rpg_monsterDrop{

};

class rpg_monster: public rpg_battler
{
    public:
        rpg_monster();
        virtual ~rpg_monster();
    private:
};

#endif // RPG_MONSTER_H
