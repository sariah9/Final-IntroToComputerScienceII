/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Space class header file 
*********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

class Space
{
protected:
  int eggCount;
  int itemCount;
  int bearCount;
  int salmonCount;
public:
  Space* top;
  Space* bottom;
  Space* right;
  Space* left;
  Space();
  ~Space();
  virtual void words() = 0;
  virtual void selectNum() = 0;
  virtual int getEggs() = 0;
  virtual int getItems() = 0;
  virtual int getBears() = 0;
  virtual void setSalmon(int) = 0;
  virtual bool bearImmunity() = 0;
};

#endif
