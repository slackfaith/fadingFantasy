#ifndef RPG_PARTICLE_H
#define RPG_PARTICLE_H

#include "SDL_app.h"
#include <vector>

typedef unsigned char UCHAR;

struct rpg_particle2DVec{
float x,y;
};

struct rpg_particle3DVec{
float x,y,z;
};

struct rpg_particleColour{
UCHAR r, g ,b ,a;
};

struct rpg_particle
{
    rpg_particle2DVec pos;
    rpg_particle2DVec vel;
    rpg_particleColour colour;
    float angle;
    float life;
    bool dead;
};

struct rpg_particleEmitterPos{
int x, y;
};

class rpg_particleEmitter
{
    public:

        void emit();
        void update();
        void move();
    private:
        rpg_particleEmitterPos _position;
        std::vector<struct rpg_particle*>
         _particles;
};

#endif // RPG_PARTICLE_H
