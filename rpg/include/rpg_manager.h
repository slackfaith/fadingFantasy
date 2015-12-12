#ifndef RPG_MANAGER_H
#define RPG_MANAGER_H

#include "rpg_scene.h"
#include "rpg_event.h"
#include "rpg_session.h"

#include "rpg_item.h"
#include "rpg_hero.h"
#include "rpg_encounter.h"
#include "rpg_ability.h"
#include "rpg_animation.h"

#include <string>
#include <vector>

class rpg_manager
{
    public:
        rpg_manager();
        virtual ~rpg_manager();

        void set_globalvar(int index, rpg_eventVAR* var);
        void add_globalvar(rpg_eventVAR* var);
        void delete_globalvar(int index);
        rpg_eventVAR* get_globalvar(int index);

    private:
        std::vector<rpg_eventVAR*>
        _globalvars;

        rpg_session* _session;
        rpg_scene* _scene;
};

#endif // RPG_MANAGER_H
