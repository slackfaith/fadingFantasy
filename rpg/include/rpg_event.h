#ifndef RPG_EVENT_H
#define RPG_EVENT_H

#include "rpg_lua.h"

enum rpg_eventVARType{
    BOOL,
    CHAR,
    STRING,
    INTEGER,
    SHORT,
    BYTE
};

struct rpg_eventVAR{
    void (*data);
    rpg_eventVARType type;
};

bool rpg_eventVAR_castBOOL(rpg_eventVAR* var);


class rpg_event
{
    public:
        rpg_event();
        virtual ~rpg_event();
    private:
};

#endif // RPG_EVENT_H
