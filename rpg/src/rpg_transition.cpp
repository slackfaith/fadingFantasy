#include "rpg_transition.h"
#include <iostream>

void rpg_transition_TEST_CAST()
{
    std::cout << "rpg_transition_TEST_CAST" << std::endl;

    rpg_transition* trans;
    rpg_transitionFADEin* transFI = new rpg_transitionFADEin;
    rpg_transitionFADEout* transFO = new rpg_transitionFADEout;

}


rpg_transition::rpg_transition()
{
    //ctor
}

rpg_transition::~rpg_transition()
{
    //dtor
}


void rpg_transition::update(){
}

void rpg_transition::draw(){
}
