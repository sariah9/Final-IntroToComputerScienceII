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
  mtnPtr = NULL;
  forestPtr = NULL;
  coastPtr = NULL;
  user = NULL;
}
/*********************************************************************
** Function: Board destructor
** Description: frees memory 
** Parameters: None
** Returns: None
*********************************************************************/
Board::~Board()
{
  while (!knapSack.empty())
  {
    knapSack.pop();
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
char map[9][12];
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  queue<char> knapSack;
  int barrels[9];
  Space* user;

-displayNine()
  -prints out linked 3x3 grid 
-printHidden()
  -prints faux grid with only the path
  -or whole board with blank spaces
-printFull()
  -used for testing and at the end
  -prints whole board that is correct
-printSack()
  -display items in knapSack
  -traverse queue front to back
-deleteItem(int chosen)
  -delete specific item depending on parameter
  -use searching method in book
  -used when user drops item
  -maybe offer delete item too?
-feedBears()
  -call deleteItem -parameter salmon
  -delete bear characters
-offerItem(int item)
  -depending on argument, offer enumerated item
  -if yes
    -keep
  -if no
    -drop()
-keep()
  -enqueue item into knapsack queue
-drop()
  -check surrounding grid for 2+ of item
  -if yes
    -offerItem(int item)
void Board::moveUser()
{
  int move = 0;
  
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
void Board::printSack(queue<char> copy)
{
  if (copy.empty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    while (!copy.empty())
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
  if (foodBarrel == 3)
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
  if (woodBarrel == 3)
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
  if (sailorBarrel == 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
