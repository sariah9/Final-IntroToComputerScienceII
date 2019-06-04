/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Forest derived class implementation file 
*********************************************************************/
#include "Forest.hpp"
/*********************************************************************
** Function: words
** Description: introduction to the Forest level
** Parameters: None
** Returns: None
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
/*********************************************************************
** Function: boardPopulate
** Description: randomly fills 3 x 3 grid with pathway and items and 
** bears
** Parameters: int that represents which move the player is on
** Returns: None
*********************************************************************/
void Forest::boardPopulate(int move)
{
  const char bear = '&';
  const char path = ' ';
  const char wood = '#';
  const char egg = 'o';
  eggCount = 0;
  itemCount = 0;
  bearCount = 0;
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
        bearCount++;
      }
      else if (random == 2)
      {
        gridMove[0][x] = egg;
        eggCount++;
      }
      else 
      {
        gridMove[0][x] = wood;
        itemCount++;
      }
    }
    gridMove[1][0] = bear;
    bearCount++;
    gridMove[2][0] = wood;
    itemCount++;
    gridMove[2][2] = wood;
    itemCount++;
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
        bearCount++;
      }
      else if (random == 2)
      {
        gridMove[y][2] = egg;
        eggCount++;
      }
      else 
      {
        gridMove[y][2] = wood;
        itemCount++;
      }
    }
    gridMove[0][0] = egg;
    eggCount++;
    gridMove[2][1] = wood;
    itemCount++;
    gridMove[2][0] = wood;
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
            gridMove[y][x] = wood;
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
          gridMove[y][x] = wood;
          itemCount++;
        }
      }
    }
  }
}
/*********************************************************************
** Function: getEggs
** Description: returns number of eggs on board for each move
** Parameters: None
** Returns: int eggCount
*********************************************************************/
int Forest::getEggs()
{
  return eggCount;
}
/*********************************************************************
** Function: getItems 
** Description: returns number of wood placed on board for each move
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Forest::getItems()
{
  return itemCount;
}
/*********************************************************************
** Function: getBears
** Description: returns number of bears on board for each move
** Parameters: None
** Returns: int bearCount
*********************************************************************/
int Forest::getBears()
{
  return bearCount;
}
/*********************************************************************
** Function: bearImmunity
** Description: returns true or false if user has collected 3+ salmon
** Parameters: int base that determines whether true
** Returns: true or false
*********************************************************************/
bool Forest::bearImmunity()
{
  if (salmonCount >=3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
