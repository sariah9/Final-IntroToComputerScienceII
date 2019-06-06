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
  bearCount = 0;
  itemCount = 0, 
  eggCount = 0;
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
        if (bearImmunity())
        { 
          gridMove[y][0] = trout;
          itemCount++;
        }
        else 
        {
          gridMove[y][0] = bear;
          bearCount++;
        }
      }
      else if (random == 2)
      {
        gridMove[y][0] = egg;
        eggCount++;
      }
      else 
      {
        gridMove[y][0] = trout;
        itemCount++;
      }
    }
    if (bearImmunity())
    {
      gridMove[0][2] = egg;
      eggCount++;
    }
    else
    {
      gridMove[0][2] = bear;
      bearCount++;
    }
    gridMove[2][1] = trout;
    itemCount++;
    gridMove[2][2] = trout;
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
          gridMove[y][x] = trout;
          itemCount++;
        }
      }
    }
  }
  makeMap(gridMove[3][3], move);
}
/*********************************************************************
** Function: makeMap
** Description: sets map equal to each gridMove 3x3 depending on set
** number
** Parameters: 3x3 array , int set
** Returns: None
*********************************************************************/
void Mountain::makeMap(char mapArr[3][3], int set)
{
  if (set == 1)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 6; y < 8; y++)
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
      for (int y = 6; y < 8; y++)
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
      for (int y = 6; y < 8; y++)
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
      for (int y = 6; y < 8; y++)
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
int Mountain::getEggs()
{
  return eggCount;
}
/*********************************************************************
** Function: getItems 
** Description: returns number of trout placed on board for each move
** Parameters: None
** Returns: int itemCount
*********************************************************************/
int Mountain::getItems()
{
  return itemCount;
}
/*********************************************************************
** Function: getBears
** Description: returns number of bears on board for each move
** Parameters: None
** Returns: int bearCount
*********************************************************************/
int Mountain::getBears()
{
  return bearCount;
}
/*********************************************************************
** Function: setSalmon
** Description: setter that allows Board class to change salmonCount
** Parameters: int growth that is added to salmonCount
** Returns: None
*********************************************************************/
void Mountain::setSalmon(int growth)
{
  salmonCount = salmonCount + growth;
}
/*********************************************************************
** Function: bearImmunity
** Description: returns true or false if user has collected 3+ salmon
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Mountain::bearImmunity()
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
