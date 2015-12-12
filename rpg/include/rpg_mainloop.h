#ifndef RPG_MAINLOOP_H
#define RPG_MAINLOOP_H

#include "rpg_manager.h"
#include "rpg_fpscounter.h"

class rpg_mainloop
{
    public:
        rpg_mainloop();
        virtual ~rpg_mainloop();

        int run();
        void exit();
    private:
        rpg_fpscounter* _fpscounter;
        rpg_manager* _manager;
        bool _done;
};

#endif // RPG_MAINLOOP_H
