/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Forest derived class  header file 
*********************************************************************/
#ifndef FOREST_HPP
#define FOREST_HPP
#include "Space.hpp"

class Forest : public Space
{
private:
public:
void words() override;
int getEnemy() override;
int getItem() override; 
void setTask() override;
bool immunity(int) override;
};

#endif
