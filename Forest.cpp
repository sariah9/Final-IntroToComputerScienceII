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
** Function: getEnemy
** Description: returns enemy type
** Parameters: None
** Returns: int enemyType
*********************************************************************/
int Forest::getEnemy()
{
  return 2;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Forest::getItem()
{
  return 2;
}
/*********************************************************************
** Function: printTask
** Description: prompts user to perform task
** Parameters: None
** Returns: None
*********************************************************************/
void Forest::printTask()
{
  cout << "You come across a blind beggar in the woods. " << endl;
  cout << "She offers to give you something you need in \n"
       << "exchange for a crystal. " << endl;
}
/*********************************************************************
** Function: setTask
** Description: 
** Parameters: None
** Returns: None
*********************************************************************/
void Forest::setTask(int growth)
{
  if (growth = 1)
  {
    cout << "You have received an amulet for fair winds! " << endl;
    cout << "This means your journey will always \n"
         << "be a safe and lucrative one." << endl;
    taskCount = taskCount + growth;
  }
  else
  {
    cout << "You may not continue your journey. " << endl;
    cout << "You should choose a different path. " << endl;
  }
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: int growth that is added to taskCount
** Returns: true or false
*********************************************************************/
bool Forest::immunity()
{
  if (taskCount >= 2)
  {
    return true;
  }
  else 
  {
    return false;
  }
}

