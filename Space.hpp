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
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Space
{
protected:
  int taskCount;
public:
  Space* top;
  Space* bottom;
  Space* right;
  Space* left;
  Space();
  ~Space();
  virtual void words() = 0;
  virtual string getEnemy() = 0;
  virtual int getItem() = 0;
  virtual void printTask() = 0;
  virtual void setTask(int) = 0;
  virtual bool immunity() = 0;
};

#endif
