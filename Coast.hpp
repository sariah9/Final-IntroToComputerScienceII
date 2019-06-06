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
void boardPopulate(int) override;
void makeMap(char mapArr[3][3], int) override;
int getEggs() override;
int getItems() override;
int getBears() override;
void setSalmon(int) override;
bool bearImmunity() override;
};

#endif
