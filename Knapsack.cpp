/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Knapsack struct implementation file
*********************************************************************/
#include "Knapsack.hpp"
/*********************************************************************
** Function: Knapsack constructor
** Description: initializes pointers to null
** Parameters: int value that changes itemNum
** Returns: None
*********************************************************************/
Knapsack::Knapsack(int value)
{
  next = nullptr;
  itemNum = value;
}
/*********************************************************************
** Function: Knapsack destructor
** Description: sets next to null
** Parameters: None
** Returns: None
*********************************************************************/
Knapsack::~Knapsack()
{
  next = nullptr;
}
