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
  bearCount = 0;
  itemCount = 0;
  eggCount = 0;
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
        if (bearImmunity())
        { 
          gridMove[y][2] = sailor;
          itemCount++;
        }
        else 
        {
          gridMove[y][2] = bear;
          bearCount++;
        }
      }
      else if (random == 2)
      {
        gridMove[y][2] = egg;
        eggCount++;
      }
      else 
      {
        gridMove[y][2] = sailor;
        itemCount++;
      }
    }
    gridMove[0][0] = egg;
    eggCount++;
    gridMove[2][0] = sailor;
    itemCount++;
    gridMove[0][1] = sailor;
    itemCount++;
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
          if (bearImmunity())
          { 
            gridMove[y][x] = trout;
            itemCount++;
          }
          else 
          {
            gridMove[y][x] = bear;
            bearCount++;
          }
        }
        else if (random == 2)
        {
          gridMove[y][x] = egg;
          eggCount++;
        }
        else 
        {
          gridMove[y][x] = sailor;
          itemCount++;
        }
      }
    }
  }
  makeMap(gridMove[3][3], move);
}

void Coast::makeMap(char mapArr[3][3], int set)
{
  if (set == 1)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        map[y][x] = mapArr[3][3];
      }
    }
    cout << endl;
  }
  else if (set == 2)
  {
    for(int x = 6; x < 8; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        map[y][x] = mapArr[3][3];
      }
    }
    cout << endl;
  }
  else if (set == 3)
  {
    for(int x = 3; x < 5; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        map[y][x] = mapArr[3][3];
      }
    }
    cout << endl;
  }
  else if (set == 4)
  {
    for(int x = 0; x < 2; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        map[y][x] = mapArr[3][3];
      }
    }
    cout << endl;
  }
}
/*********************************************************************
** Function: getEggs
** Description: returns number of eggs on board for each move
** Parameters: None
** Returns: int eggCount
*********************************************************************/
int Coast::getEggs()
{
  return eggCount;
}
/*********************************************************************
** Function: getItems 
** Description: returns number of sailors placed on board for each 
** move
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Coast::getItems()
{
  return itemCount;
}
/*********************************************************************
** Function: getBears
** Description: returns number of bears on board for each move
** Parameters: None
** Returns: int bearCount
*********************************************************************/
int Coast::getBears()
{
  return bearCount;
}
/*********************************************************************
** Function: setSalmon
** Description: setter that allows Board class to change salmonCount
** Parameters: int growth that is added to salmonCount
** Returns: None
*********************************************************************/
void Coast::setSalmon(int growth)
{
  salmonCount = salmonCount + growth;
}
/*********************************************************************
** Function: bearImmunity
** Description: returns true or false if user has collected 3+ salmon
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Coast::bearImmunity()
{
  if (salmonCount >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
