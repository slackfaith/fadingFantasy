#ifndef RPG_TRANSITION_H
#define RPG_TRANSITION_H

#include "SDL_app.h"

typedef unsigned char UCHAR;

class rpg_transition
{
    public:
        rpg_transition();
        virtual ~rpg_transition();

        virtual void update();
        virtual void draw();

    protected:
        SDL_Surface* _surface;
    private:
};

class rpg_transitionFADE : public rpg_transition{
public:
protected:
    UCHAR _alpha;
private:
};

class rpg_transitionFADEin : public rpg_transitionFADE{
public:
private:
};

class rpg_transitionFADEout: public rpg_transitionFADE{
public:
private:
};


void rpg_transition_TEST_CAST();

#endif // RPG_TRANSITION_H
