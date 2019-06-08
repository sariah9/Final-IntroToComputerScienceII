/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Forest derived class implementation file 
*********************************************************************/
#include "Forest.hpp"
/*********************************************************************
** Function: words
** Description: introduction to the Forest level
** Parameters: None
** Returns: None
*********************************************************************/
void Forest::words()
{
  cout << "You made it to the Forest! " << endl;
  cout << "Dappled sunlight falls across \n"
       << "the path, and the huge pines \n"
       << "tower above you. You take a \n"
       << "cool breath and seek out \n"
       << "any wood that may be near. " << endl;
}
/*********************************************************************
** Function: setEnemy
** Description: sets enemy type to pirates
** Parameters: int type
** Returns: None
*********************************************************************/
void Forest::setEnemy(int type)
{
  enemyType = type;
}
/*********************************************************************
** Function: setItem
** Description: sets item type to sailors
** Parameters: None
** Returns: int eggCount
*********************************************************************/
void Forest::setItem(int type)
{
  itemType = type;
}
/*********************************************************************
** Function: getEnemy
** Description: returns enemy type
** Parameters: None
** Returns: int enemyType
*********************************************************************/
int Forest::getEnemy()
{
  return enemyType;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Forest::getItem()
{
  return itemType;
}
/*********************************************************************
** Function: setTask
** Description: setter that allows Board class to change taskCount
** Parameters: int growth that is added to taskCount
** Returns: None
*********************************************************************/
void Forest::setTask(int growth)
{
  taskCount = taskCount + growth;
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Forest::immunity()
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

