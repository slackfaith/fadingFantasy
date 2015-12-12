#ifndef RPG_COMMAND_H
#define RPG_COMMAND_H

#include "rpg_types.h"

#include <string>

class rpg_command
{
    public:
        rpg_command();
        virtual ~rpg_command();
    private:
        std::string _name;
        rpg_comandType _type;
};

#endif // RPG_COMMAND_H
