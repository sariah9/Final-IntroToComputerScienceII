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
** Function: addToSack
** Description: adding items to circular queue Knapsack
** Parameters:
** Returns: 
*********************************************************************/
void Board::addToSack(int val)
{
  Knapsack* newPtr = new Knapsack(val);
  if (isEmpty())
  {
    front = newPtr;
    front->next = front;
    rear = front;
  }
  else if (front->next == front)
  {
    front->next = newPtr;
    rear = newPtr;
    rear->next = front;
  }   
  else
  {
    rear->next = newPtr;
    rear = newPtr;
    rear->next = front;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printSack()
{
  Knapsack* itemPtr = front;
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    cout << "Knapsack items: ";
    do {
      if (itemPtr->itemNum == 1)
      {
        cout << "One " << t << endl;
      }
      else if (itemPtr->itemNum == 2)
      {
        cout "One " << w << endl;
      }
      else if (itemPtr->itemNum == 3)
      {
        cout "One " << s << endl;
      }
      else if (itemPtr->itemNum == 4)
      {
        cout "One " << f << endl;
      }
      else if (itemPtr->itemNum == 5)
      {
        cout "One " << c << endl;
      }
      else if (itemPtr->itemNum == 6)
      {
        cout "One " << e << endl;
      }
      else 
      {
        cout << "One " << salm << endl;
      }
      itemPtr = itemPtr->next;
    }
  }  while (itemPtr != front);
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::deleteItem(int item)
{
  Knapsack* nodePtr = head;
  if (isEmpty())
  {
    cout << "Sorry. Your sack is empty. " << endl;
  }
  else
  {
    if (front->next == front)
    {
      if (front->itemNum == item)
      {
        delete nodePtr;
        front = nullptr;
        rear = nullptr;
      }
    }
    else
    {
      if (front->itemNum == item)
      {
        front = front->next;
        delete nodePtr;
        rear->next = front;
      }
      else 
      {
        Knapsack* prevPtr = nodePtr;
        while (nodePtr->next != front && nodePtr->itemNum != item)
        {
          prevPtr = nodePtr;
          nodePtr = nodePtr->next;
        }
        if (nodePtr->itemNum == item)
        {
          prevPtr->next = nodePtr->next;
          delete nodePtr;
        }
      }
    }
  }
  nodePtr = nullptr;
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
