#ifndef RPG_BATTLER_H
#define RPG_BATTLER_H

#include "rpg_command.h"
#include "rpg_types.h"

#include "SDL_app.h"

#include <string>
#include <vector>

class rpg_battler
{
    public:
        rpg_battler();
        virtual ~rpg_battler();
    protected:
        std::string _name;
        std::vector<rpg_command*>
         _commands;
         rpg_battlerType _type;
         SDL_Surface* _surface;
    private:
};

#endif // RPG_BATTLER_H
