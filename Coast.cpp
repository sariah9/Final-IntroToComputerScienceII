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
  int random = (rand() % 3) + 1;
  if  (move == 1)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = path;
    gridMove[1][0] = path;
    if (bearImmunity())
    { 
      gridMove[0][0] = sailor;
      itemCount++;
      gridMove[0][1] = egg;
      eggCount++;
      gridMove[2][0] = sailor;
      itemCount++;
      gridMove[2][2] = egg;
      eggCount++;
      gridMove[1][2] = sailor;
      itemCount++;
      gridMove[0][2] = egg;
      eggCount++;
    }
    else if (random == 2)
    {
      gridMove[0][0] = bear;
      bearCount++;
      gridMove[0][1] = egg;
      eggCount++;
      gridMove[2][0] = sailor;
      itemCount++;
      gridMove[2][2] = egg;
      eggCount++;
      gridMove[1][2] = sailor;
      itemCount++;
      gridMove[0][2] = bear;
      bearCount++;
    }
    else 
    {
      gridMove[0][0] = egg;
      eggCount++;
      gridMove[0][1] = egg;
      eggCount++;
      gridMove[2][0] = bear;
      bearCount++;
      gridMove[1][2] = sailor;
      itemCount++;
      gridMove[2][2] = sailor;
      itemCount++;
      gridMove[0][2] = bear;
      bearCount++;
    }
  }
  else 
  {
    gridMove[1][1] = path;
    gridMove[1][0] = path;
    gridMove[1][2] = path;
    if (bearImmunity())
    { 
      gridMove[0][0] = sailor;
      itemCount++;
      gridMove[0][1] = sailor;
      itemCount++;
      gridMove[2][0] = sailor;
      itemCount++;
      gridMove[2][1] = egg;
      eggCount++;
      gridMove[2][2] = egg;
      eggCount++;
      gridMove[0][2] = egg;
      eggCount++;
    }
    else if (random == 3)
    {
      gridMove[0][0] = egg;
      eggCount++;
      gridMove[0][1] = egg;
      eggCount++;
      gridMove[2][0] = bear;
      bearCount++;
      gridMove[2][1] = sailor;
      itemCount++;
      gridMove[2][2] = sailor;
      itemCount++;
      gridMove[0][2] = bear;
      bearCount++;
    }
    else
    {
      gridMove[0][0] = sailor;
      itemCount++;
      gridMove[0][1] = egg;
      eggCount++;
      gridMove[2][0] = bear;
      bearCount++;
      gridMove[2][1] = sailor;
      itemCount++;
      gridMove[2][2] = sailor;
      itemCount++;
      gridMove[0][2] = bear;
      bearCount++;
    }
  }
  makeMap(move);
}
/*********************************************************************
** Function: makeMap
** Description: sets map equal to each gridMove 3x3 depending on set
** number
** Parameters: 3x3 array , int set
** Returns: None
*********************************************************************/
void Coast::makeMap(int set)
{
  if (set == 1)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        map[y][x] = gridMove[3][3];
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
        map[y][x] = gridMove[3][3];
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
        map[y][x] = gridMove[3][3];
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
        map[y][x] = gridMove[3][3];
      }
    }
    cout << endl;
  }
}
/*********************************************************************
** Function: printMap
** Description: depending on move, prints map
** Parameters: None
** Returns: int move
*********************************************************************/
void Coast::printMap(int move)
{
    if (move == 0)
    {
        for(int x = 9; x < 11; x++)
        {
            for (int y = 6; y < 8; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 1)
    {
        for(int x = 6; x < 8; x++)
        {
            for (int y = 6; y < 8; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 2)
    {
        for(int x = 3; x < 5; x++)
        {
            for (int y = 6; y < 8; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 3)
    {
        for(int x = 0; x < 2; x++)
        {
            for (int y = 6; y < 8; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 4)
    {
        for(int x = 0; x < 2; x++)
        {
            for (int y = 3; y < 5; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 5)
    {
        for(int x = 3; x < 5; x++)
        {
            for (int y = 3; y < 5; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 6)
    {
        for(int x = 6; x < 8; x++)
        {
            for (int y = 3; y < 5; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 7)
    {
        for(int x = 9; x < 11; x++)
        {
            for (int y = 3; y < 5; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 8)
    {
        for(int x = 9; x < 11; x++)
        {
            for (int y = 0; y < 2; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 9)
    {
        for(int x = 6; x < 8; x++)
        {
            for (int y = 0; y < 2; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 10)
    {
        for(int x = 3; x < 5; x++)
        {
            for (int y = 0; y < 2; y++)
            {
                cout << map[y][x];
            }
        }
        cout << endl;
    }
    else if (move == 11)
    {
        for(int x = 0; x < 2; x++)
        {
            for (int y = 0; y < 2; y++)
            {
                cout << map[y][x];
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
