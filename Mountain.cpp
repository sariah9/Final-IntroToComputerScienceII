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
** Returns: enemyType
*********************************************************************/
string Mountain::getEnemy()
{
  string enemyType = "cougars";
  return enemyType;
}
/*********************************************************************
** Function: getItem 
** Description: returns number of item
** Parameters: None
** Returns: 1 for trout
*********************************************************************/
int Mountain::getItem()
{
  return 1;
}
/*********************************************************************
** Function: printTask
** Description: prompts user for specific task on that level
** Parameters: None
** Returns: None
*********************************************************************/
void Mountain::printTask()
{
  cout << "You need to cross through a cave. " << endl;
  cout << "You can use a flashlight to light your way. " << endl;
}
/*********************************************************************
** Function: setTask
** Description: 
** Parameters: int growth that is added to taskCount
** Returns: None
*********************************************************************/
void Mountain::setTask(int growth)
{
  if (growth == 1)
  {
    cout << "You found a treasure chest! " << endl;
    cout << "This money will allow you to \n"
         << "travel from town to town until \n"
         << "you are ready for your voyage!" << endl;
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
bool Mountain::immunity()
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
