#ifndef RPG_SCENE_H
#define RPG_SCENE_H

#include "rpg_actor.h"
#include "rpg_camera.h"
#include "rpg_animation.h"
#include "rpg_dialog.h"
#include "rpg_particle.h"
#include "rpg_transition.h"
#include "rpg_sprite.h"
#include "rpg_tilemap.h"
#include "rpg_audio.h"
#include "rpg_lua.h"
#include "SDL_app.h"

#include <vector>
#include <string>

struct rpg_sceneCoord{
    int x,y;
};

struct rpg_sceneLayout{
    SDL_Surface* _surface;
    struct rpg_sceneCoord _size;
};

class rpg_scene
{
    public:
        rpg_scene();
        virtual ~rpg_scene();
    private:
        std::string _name;  `
        std::vector<rpg_actor*>
        _actors;
        std::vector<rpg_sprite>
         _sprites;
        std::vector<rpg_particleEmitter*>
        _particleEmitters;

        rpg_transition* _transition;
        rpg_sceneLayout* _layout;
        rpg_camera* _camera;
};

#endif // RPG_SCENE_H
