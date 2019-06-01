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
  mtnPtr->boardPopulate();
  
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
void offerItem(int)
void keep()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void drop()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void addBarrels(int item)
{
  int food = 0;
  int wood = 0;
  int sailor = 0;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void woodBarrels()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void sailorBarrels()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void countBarrels()
{
}
