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
  s = "sailor";
  t = "trout";
  w = "wood";
  f = "flashlight";
  c = "crystal";
  e = "egg";
  salm = "salmon";
  b = "bear";
  bearsNearby = true;
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
** Function: isEmpty
** Description: returns true when there are no items in the Knapsack
** Parameters: None
** Returns: true or false
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
** Parameters: int val that will be equal to itemNum
** Returns: None
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
int Board::offerItem()
{
  int random = (rand() % 4) + 1;
  if (random == 1)
  {
    return 1;//item
  }
  else if (random == 2)
  {
    return 2;//egg
  }
  else if (random == 3)
  {
    return 3;//extra 
  }
  else 
  {
     return 4;//item
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::keep(int item)
{
  if ()
  {  //item is the same as two others in the knapsack
    deleteItem(item);
    deleteItem(item);
    barrels++;
  }
  else
  {
  addToSack(item);
  }
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
int Board::checkKnapsack()
{
  //check for three items that match in Knapsack
  int troutNum = 0, woodNum = 0, sailorNum = 0;
  int eggNum = 0, salmonNum = 0;
  Knapsack* itemPtr = front;
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    do {
      if (itemPtr->itemNum == 1)
      {
        troutNum++;
      }
      else if (itemPtr->itemNum == 2)
      {
        woodNum++;
      }
      else if (itemPtr->itemNum == 3)
      {
        sailorNum++;
      }
      else if (itemPtr->itemNum == 6)
      {
        eggNum++;
      }
      else if (itemPtr->itemNum == 7)
      {
        salmonNum++;
      }
      itemPtr = itemPtr->next;
    }
  }  while (itemPtr != front);
  if (troutNum >= 3)
  {
    return 1;
  }
  else if (woodNum >= 3)
  {
    return 1;
  }
  else if (sailorNum >= 3)
  {
    return 1;
  }
  else if (eggNum >= 3)
  {
    return 2;
  }
  else if (salmonNum >= 3)
  {
    return 3;
  }
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
  if (foodBarrels >= 3)
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
  if (woodBarrels >= 3)
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
  if (sailorBarrels >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
