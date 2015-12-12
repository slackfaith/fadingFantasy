#ifndef RPG_HERO_H
#define RPG_HERO_H

#include "rpg_actor.h"
#include "rpg_battler.h"
#include "rpg_item.h"
#include "rpg_ability.h"
#include "rpg_types.h"

#include <vector>
#include <string>

class rpg_hero : public rpg_actor
{
    public:
        rpg_hero();
        virtual ~rpg_hero();
    private:
        rpg_battler* _battler;
};

#endif // RPG_HERO_H
