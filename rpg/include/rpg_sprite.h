#ifndef RPG_SPRITE_H
#define RPG_SPRITE_H

#include <vector>
#include <string>

#include "rpg_animation.h"
#include "rpg_audio.h"
#include "rpg_input.h"
#include "rpg_event.h"
#include "rpg_lua.h"
#include "SDL_app.h"

class rpg_sprite;

class rpg_spriteCollection{
public:

    void add(rpg_sprite* sprite);
    void get(int index);
    void del(int index);
    void update();
private:
    std::vector<rpg_sprite*>
     _sprites;
};

struct rpg_spriteHitBox{
int width;
int height;
int posX;
int posY;
};

struct rpg_spritePosition{
float posX, posY;
};

static unsigned int
 _spriteID;

class rpg_sprite
{
    public:
        rpg_sprite();
        virtual ~rpg_sprite();

        void move();
        void update();
    protected:
        std::string _label;
        rpg_spritePosition _position;
        std::vector<rpg_spriteHitBox*>
        _hitboxes;
    private:
};

#endif // RPG_SPRITE_H
