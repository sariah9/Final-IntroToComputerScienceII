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
** Function: setEnemy
** Description: sets enemy type to bears
** Parameters: int type
** Returns: None
*********************************************************************/
void Mountain::setEnemy(int type)
{
  enemyType = type;
}
/*********************************************************************
** Function: setItem
** Description: sets item type to trout
** Parameters: None
** Returns: int eggCount
*********************************************************************/
void Mountain::setItem(int type)
{
  itemType = type;
}
/*********************************************************************
** Function: getEnemy
** Description: returns enemy type
** Parameters: None
** Returns: int enemyType
*********************************************************************/
int Mountain::getEnemy()
{
  return enemyType;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Mountain::getItem()
{
  return itemType;
}
/*********************************************************************
** Function: setTask
** Description: setter that allows Board class to change taskCount
** Parameters: int growth that is added to taskCount
** Returns: None
*********************************************************************/
void Mountain::setTask(int growth)
{
  taskCount = taskCount + growth;
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Mountain::immunity()
{
  if (taskCount >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
