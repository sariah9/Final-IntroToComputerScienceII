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

class Space
{
protected:
  char gridMove[3][3];
public:
  Space* up;
  Space* down;
  Space* right;
  Space* left;
  Space();
  ~Space();
  virtual void words() = 0;
  virtual void randomOffer() = 0;
  virtual void boardPopulate(int) = 0;
};

#endif
