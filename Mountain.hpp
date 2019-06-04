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
void boardPopulate(int); override
int getEggs(); override
int getItems(); override
int getBears(); override 
bool bearImmunity(int); override
};

#endif
