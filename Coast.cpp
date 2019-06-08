/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Coast derived class implementation file 
*********************************************************************/
#include "Coast.hpp"
/*********************************************************************
** Function: words
** Description: introduction to the Coast level
** Parameters: None
** Returns: None
*********************************************************************/
void Coast::words()
{
  cout << "Finally! The coast is here!" << endl;
  cout << "You can already smell the salty \n"
       << "tang of the ocean spray and hear \n"
       << "sea gulls as they fight over \n"
       << "crab. Under a sunny, cloudless \n"
       << "sky, you begin to look for sailors. " << endl;
}
/*********************************************************************
** Function: getEnemy
** Description: returns enemy type
** Parameters: None
** Returns: int enemyType
*********************************************************************/
int Coast::getEnemy()
{
  return enemyType;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of sailors placed on board for each 
** move
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Coast::getItem()
{
  return itemType;
}
/*********************************************************************
** Function: printTask
** Description: prompts user to complete task
** Parameters: None
** Returns: None
*********************************************************************/
void Coast::printTask()
{
  cout << "You wish to send a message out to sea. " << endl;
  cout << "Please search for a bottle with a cork. " << endl;
}
/*********************************************************************
** Function: setTask
** Description: setter that allows Board class to change taskCount
** Parameters: int growth that is added to taskCount
** Returns: None
*********************************************************************/
void Coast::setTask(int growth)
{
  taskCount = taskCount + growth;
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Coast::immunity()
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
