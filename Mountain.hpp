/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Mountain derived class  header file 
*********************************************************************/
#ifndef MOUNTAIN_HPP
#define MOUNTAIN_HPP
#include "Space.hpp"

class Mountain : public Space
{
private:
public:
void words(); override
int randomOffer(); override
void boardPopulate(int); override
};

#endif
