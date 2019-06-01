/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Coast derived class implementation file 
*********************************************************************/
#include "Coast.hpp"
/*********************************************************************
** Function: words
** Description: introduction to the Coast level
** Parameters: None
** Returns: None
*********************************************************************/
void Coast::words()
{
  cout << "Finally! The coast is here!" << endl;
  cout << "You can already smell the salty \n"
       << "tang of the ocean spray and hear \n"
       << "sea gulls as they fight over \n"
       << "crab. Under a sunny, cloudless \n"
       << "sky, you begin to look for sailors. " << endl;
}
/*********************************************************************
** Function: randomOffer
** Description: randomly generates items specific to Coast level
** Parameters: None
** Returns: int that represents item
*********************************************************************/
int Coast::randomOffer()
{
  int random = (rand() % 4) + 1;
  if (random == 1)
  {
    //sailor
  }
  else if (random == 2)
  {
    //egg
  }
  else if (random == 3)
  {
    //extra space
  }
  else 
  {
     //sailor
  }
}
/*********************************************************************
** Function: boardPopulate
** Description: randomly fills 3 x 3 grid with pathway and items and 
** bears
** Parameters: int that represents which move the player is on
** Returns: None
*********************************************************************/
void Coast::boardPopulate(int move)
{
  const char bear = '&';
  const char path = ' ';
  const char sailor = '+';
  const char egg = 'o';
  if (move == 1)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = path;
    gridMove[1][0] = path;
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
        gridMove[y][2] = sailor;
      }
    }
    gridMove[0][0] = egg;
    gridMove[2][0] = sailor;
    gridMove[0][1] = sailor;
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
          gridMove[y][x] = sailor;
        }
      }
    }
  }
}
