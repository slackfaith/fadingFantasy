#ifndef RPG_DIALOG_H
#define RPG_DIALOG_H

#include <string>
#include <vector>

#include "SDL_app.h"

class rpg_dialog;
class rpg_widget;

class rpg_dialogSystem
{
public:
    void update();
    void draw();
private:
    std::vector<rpg_dialog*>
     _dialogs;
};

class rpg_widget
{
public:
private:
    SDL_Surface* _surface;
};

class rpg_dialog
{
    public:
        rpg_dialog();
        virtual ~rpg_dialog();

        void update();
        void draw();
    private:
        std::vector<rpg_widget*>
        _widgets;
};

#endif // RPG_DIALOG_H
