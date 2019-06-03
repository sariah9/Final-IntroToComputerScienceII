/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Board class implementation file 
*********************************************************************/
#include "Board.hpp"
/*********************************************************************
** Function: Board constructor
** Description: initializes values and creates new instances of each 
** level
** Parameters: None
** Returns: None
*********************************************************************/
Board::Board()
{
  mtnPtr = nullptr;
  forestPtr = nullptr;
  coastPtr = nullptr;
  user = nullptr;
  front = nullptr;
  rear = nullptr;
}
/*********************************************************************
** Function: Board destructor
** Description: frees memory 
** Parameters: None
** Returns: None
*********************************************************************/
Board::~Board()
{
  Knapsack* garbage = front;
  while (garbage != nullptr)
  {
    front = front->next;
    garbage->next = nullptr;
    delete garbage;
    garbage = front;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
bool Board::isEmpty()
{
  if (front == nullptr)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::moveUser()
{
  int move = 0;
  //somehow set user to mtnPtr->left or forest->right
  mtnPtr = new Mountain;
  forestPtr = new Forest;
  coastPtr = new Coast;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::displayNine()
{
 for(int x = 12; x > 0; x--)
  {
    for (int y = 9; y > 0; y--)
    {
      map[y][x] = mtnPtr->boardPopulate();
      cout << map[x][y];
    }
  }
  cout << endl;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printHidden()
{
  for(int x = 0; x < 12; x++)
  {
    for (int y = 0; y < 9; y++)
    {
      map[y][x] = ' ';
      cout << map[x][y];
    }
  }
  cout << endl;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printFull()
{
   for(int x = 0; x < 12; x++)
  {
    for (int y = 0; y < 9; y++)
    {
      cout << map[x][y];
    }
  }
  cout << endl;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printSack()
{
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    while (!isEmpty())
    { 
      cout << copy.front() << " ";
      copy.pop();
    }
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::deleteItem()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::feedBears()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::offerItem(int)
void Board::keep()
{
  knapSack.push(ch);
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::drop()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::addBarrels(int item)
{
  int food = 0;
  int wood = 0;
  int sailor = 0;
}
/*********************************************************************
** Function: levelMPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelMPassed()
{
  if (mtnPtr->getItems() == 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: levelFPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelFPassed()
{
  if ( == 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: levelCPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelCPassed()
{
  if ( == 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
