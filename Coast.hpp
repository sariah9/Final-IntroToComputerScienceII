/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Coast derived class header file 
*********************************************************************/
#ifndef COAST_HPP
#define COAST_HPP
#include "Space.hpp"

class Coast : public Space
{
private:
public:
void words() override;
string getEnemy() override;
int getItem() override; 
void printTask() override;
void setTask(int) override;
bool immunity() override;
};

#endif
