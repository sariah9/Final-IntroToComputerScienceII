/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Forest derived class implementation file 
*********************************************************************/
#include "Forest.hpp"
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Forest::words()
{
  cout << "You made it to the Forest! " << endl;
  cout << "Dappled sunlight falls across \n"
       << "the path, and the huge pines \n"
       << "tower above you. You take a \n"
       << "cool breath and seek out \n"
       << "any wood that may be near. " << endl;
}
void Forest::randomOffer()
{
  int random = (rand() % 4) + 1;
  if (random == 1)
  {
    //wood
  }
  else if (random == 2)
  {
    //egg
  }
  else if (random == 3)
  {
    //crystal
  }
  else 
  {
     //wood
  }
}
void Forest::boardPopulate(int move)
{
  const char bear = '&';
  const char path = ' ';
  const char wood = '#';
  const char egg = 'o';
  if (move == 1)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = path;
    gridMove[1][2] = path;
    for (int x = 0; x < 2; x++)
    {
      int random = (rand() % 3) + 1;
      if (random == 1)
      { 
        gridMove[0][x] = bear;
      }
      else if (random == 2)
      {
        gridMove[0][x] = egg;
      }
      else 
      {
        gridMove[0][x] = wood;
      }
    }
    gridMove[1][0] = bear;
    gridMove[2][0] = wood;
    gridMove[2][2] = wood;
  }
  else if (move == 4)
  {
    gridMove[1][0] = path;
    gridMove[1][1] = path;
    gridMove[0][1] = path;
    for (int y = 0; y < 2; y++)
    {
      int random = (rand() % 3) + 1;
      if (random == 1)
      { 
        gridMove[y][2] = bear;
      }
      else if (random == 2)
      {
        gridMove[y][2] = egg;
      }
      else 
      {
        gridMove[y][2] = wood;
      }
    }
    gridMove[0][0] = egg;
    gridMove[2][1] = wood;
    gridMove[2][0] = wood;
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
          gridMove[y][x] = wood;
        }
      }
    }
  }
}
