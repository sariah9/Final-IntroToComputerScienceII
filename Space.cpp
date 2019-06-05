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
Space::Space()
{
  up = nullptr;
  down = nullptr;
  right = nullptr;
  left = nullptr;
  for (int y = 0; y < 2; y++)
  {
    for (int x = 0; x < 2; x++)
    {
      gridMove[y][x] = ' ';
    }
  }
  bearCount = 0;
  itemCount = 0;
  eggCount = 0;
  salmonCount = 0;
  for(int x = 0; x < 11; x++)
  {
    for (int y = 0; y < 8; y++)
    {
      map[x][y] = ' ';
    }
  }
}
/*********************************************************************
** Function: Space destructor
** Description: sets pointers back to NULL
** Parameters: None
** Returns: None
*********************************************************************/
Space::~Space()
{
up = nullptr;
down = nullptr;
right = nullptr;
left = nullptr;
}
