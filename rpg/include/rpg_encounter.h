#ifndef RPG_ENCOUNTER_H
#define RPG_ENCOUNTER_H

#include "rpg_item.h"
#include "rpg_monster.h"
#include "rpg_types.h"

#include <string>
#include <vector>

struct rpg_encounterEntry{
    int monster_id, posX, posY;
    float scaleX, scaleY;
};

class rpg_encounter
{
    public:
        rpg_encounter();
        virtual ~rpg_encounter();
    private:
        std::string _name;
        std::vector<rpg_encounterEntry*>
        _entries;

};

#endif // RPG_ENCOUNTER_H
