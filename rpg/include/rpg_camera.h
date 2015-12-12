#ifndef RPG_CAMERA_H
#define RPG_CAMERA_H

#include "rpg_input.h"

struct rpg_camera2DVec{
float x,y;
};

struct rpg_cameraValues{
        struct rpg_camera2DVec _pos;
        struct rpg_camera2DVec _size;
        struct rpg_camera2DVec _scale;
        struct rpg_camera2DVec _vel;
};

class rpg_camera
{
    public:
        rpg_camera();
        virtual ~rpg_camera();

        void update();
        void move();
        void scale();
        void changevel();
        void setsize();
        void setpos();

    private:
        rpg_cameraValues _values;
};

#endif // RPG_CAMERA_H
