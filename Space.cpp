/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description:  Space class implementation file 
*********************************************************************/
#include "Space.hpp"
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
Space::Space()
{
  up = NULL;
  down = NULL;
  right = NULL;
  left = NULL;
  for (int y = 0; y < 2; y++)
  {
    for (int x = 0; x < 2; x++)
    {
      gridMove[y][x] = ' ';
    }
  }
}
Space::~Space()
{
up = NULL;
down = NULL;
right = NULL;
left = NULL;
}
