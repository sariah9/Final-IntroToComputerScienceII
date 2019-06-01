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
  Space* up;
  Space* down;
  Space* right;
  Space* left;
  char gridMove[3][3];
public:
  Space();
  ~Space();
  virtual void words();
  virtual void randomOffer();
  virtual void boardPopulate();
};

#endif
