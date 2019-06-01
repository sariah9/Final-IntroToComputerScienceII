/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Board class implementation file 
*********************************************************************/
#include "Board.hpp"
/*********************************************************************
** Function: board constructor
** Description: initializes values and creates new instances of each 
** level
** Parameters: None
** Returns: None
*********************************************************************/
Board::Board()
{
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
Board::~Board()
{
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
-constructor
  -STL barrel of food
  -STL barrel of wood
  -STL barrel of sailors
  Space* user //keeps track of user
-destructor 
  -.pop all barrels STL
-moveUser()
  -need a way to keep track of where user is... 
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
-foodBarrels()
  -STL queue of trout barrels
  -if yes .push
-woodBarrels()
  -STL queue of trout barrels
  -if yes .push
-sailorBarrels()
  -STL queue of trout barrels
  -if yes .push
void Board::moveUser()
{
}
void Board::boardPopulate()
{
}
void Board::displayNine()
{
}
void Board::displayTwFive()
{
}
void Board::printHidden()
{
}
void Board::printFull()
{
}
void Board::printSack()
{
}
void Board::deleteItem()
{
}
void Board::feedBears()
{
}
void Board::keepOrDropMenu()
{
}
