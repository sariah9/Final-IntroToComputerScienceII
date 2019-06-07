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
  const char bear = '&';
  const char path = ' ';
  const char trout = '%';
  const char egg = 'o';
public:
Mountain() : Space()
{
}
void words() override;
void boardPopulate(int) override;
void makeMap(int) override;
void printMap(int move)override;
int getEggs() override;
int getItems() override;
int getBears() override; 
void setSalmon(int) override;
bool bearImmunity() override;
};

#endif
