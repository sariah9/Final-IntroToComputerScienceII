/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Knapsack struct implementation file
*********************************************************************/
#include "Knapsack.hpp"

KnapSack::Knapsack(int value)
{
  next = NULL;
  itemNum = value;
}
Knapsack::~Knapsack()
{
  next = NULL;
}
