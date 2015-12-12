
#include "rpg_main.h"

int main ( int argc, char** argv )
{
    rpg_transition_TEST_CAST();

    //return SDL_TEST();
    g_mainloop = new rpg_mainloop;
    return g_mainloop->run();
}
