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
** Returns: string enemyType
*********************************************************************/
string Coast::getEnemy()
{
  string enemyType = "trolls";
  return enemyType;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item type
** Parameters: None
** Returns: 3 for sailors
*********************************************************************/
int Coast::getItem()
{
  return 3;
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
  if (growth = 3)
  {
    cout << "You have made a friend on the beach! " << endl;
    cout << "She is an accountant and will \n"
         << "accompany you on your journey." << endl;
    taskCount = taskCount + growth;
  }
  else
  {
    cout << "You will never gain immunity that way. " << endl;
  }
}
/*********************************************************************
** Function: immunity
** Description: returns true or false if user has completed task
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Coast::immunity()
{
  if (taskCount >= 4)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
