/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Mountain derived class implementation file 
*********************************************************************/
#include "Mountain.hpp"
/*********************************************************************
** Function: words
** Description: introduction to the beginning of Mountain level
** Parameters: None
** Returns: None
*********************************************************************/
void Mountain::words()
{
  cout << "Here you are in the Mountains! " << endl;
  cout << "Ah, the fresh air, the stunning peaks, \n"
       << "the sounds of waterfalls and eagles!" << endl;
  cout << "A perfect day for a trout hunt. " << endl;
}
/*********************************************************************
** Function: getEnemy
** Description: returns enemy type
** Parameters: None
** Returns: int enemyType
*********************************************************************/
int Mountain::getEnemy()
{
  return 1;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Mountain::getItem()
{
  return 1;
}
/*********************************************************************
** Function: setTask
** Description: prompts user for specific task on that level
** Parameters: None
** Returns: None
*********************************************************************/
void Mountain::setTask()
{
  cout << "You need to cross through a cave. " << endl;
  cout << "If you do not use a flashlight, you cannot continue. " << endl;
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: int growth that is added to taskCount
** Returns: true or false
*********************************************************************/
bool Mountain::immunity(int growth)
{
  taskCount = taskCount + growth;
  if (taskCount >= 2)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
