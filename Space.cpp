/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description:  Space class implementation file 
*********************************************************************/
#include "Space.hpp"
/*********************************************************************
** Function: Space constructor
** Description: initializes pointers to NULL and fills 3 x 3 grid 
** space with blank spaces and sets count ints to 0
** Parameters: None
** Returns: None
*********************************************************************/
Space::Space(int a, int b, int c)
{
  top = nullptr;
  bottom = nullptr;
  right = nullptr;
  left = nullptr;
  itemType = a;
  enemyType = b;
  taskCount = c;
}
/*********************************************************************
** Function: Space destructor
** Description: sets pointers back to NULL
** Parameters: None
** Returns: None
*********************************************************************/
Space::~Space()
{
top = nullptr;
bottom = nullptr;
right = nullptr;
left = nullptr;
}
