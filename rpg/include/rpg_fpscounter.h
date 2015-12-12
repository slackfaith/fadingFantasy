#ifndef RPG_FPSCOUNTER_H
#define RPG_FPSCOUNTER_H

#include <string>
#include <limits>

#define MAX_FPS 60

class rpg_fpscounter
{
    public:
        rpg_fpscounter();
        virtual ~rpg_fpscounter();

        void update();
        std::string asString();
    private:
        float _ftime;
        int _fps;
};

#endif // RPG_FPSCOUNTER_H
