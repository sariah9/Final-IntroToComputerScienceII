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
** Function: randomOffer
** Description: offers items specific to Mountain level
** Parameters: None
** Returns: int that represents item
*********************************************************************/
int Mountain::randomOffer()
{
  int random = (rand() % 4) + 1;
  if (random == 1)
  {
    return 1;//trout
  }
  else if (random == 2)
  {
    return 2;//egg
  }
  else if (random == 3)
  {
    return 3;//flashlight
  }
  else 
  {
    return 4;//trout
  }
}
/*********************************************************************
** Function: boardPopulate
** Description: fills each 3 x 3 space with pathway and randomly 
** chosen items and bears
** Parameters: None
** Returns: None
*********************************************************************/
void Mountain::boardPopulate(int move)
{
  const char bear = '&';
  const char path = ' ';
  const char trout = '%';
  const char egg = 'o';
  //int b = 0, t = 0, e = 0;
  if (move == 4)
  {
    gridMove[0][1] = path;
    gridMove[1][1] = path;
    gridMove[1][2] = path;
    for (int y = 0; y < 2; y++)
    {
      int random = (rand() % 3) + 1;
      if (random == 1)
      { 
        gridMove[y][0] = bear;
      }
      else if (random == 2)
      {
        gridMove[y][0] = egg;
      }
      else 
      {
        gridMove[y][0] = trout;
      }
    }
    gridMove[0][2] = bear;
    gridMove[2][1] = trout;
    gridMove[2][2] = trout;
  }
  else 
  {
    gridMove[1][0] = path;
    gridMove[1][1] = path;
    gridMove[1][2] = path;
    for (int y = 0; y < 2; y += 2)
    {
      for (int x = 0; x < 2; x++)
      {
        int random = (rand() % 3) + 1;
        if (random == 1)
        { 
          gridMove[y][x] = bear;
        }
        else if (random == 2)
        {
          gridMove[y][x] = egg;
        }
        else 
        {
          gridMove[y][x] = trout;
        }
      }
    }
  }
}
