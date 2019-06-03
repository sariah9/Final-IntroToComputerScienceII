/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Knapsack struct header file 
*********************************************************************/
#ifndef KNAPSACK_HPP
#define KNAPSACK_HPP

struct Knapsack
{
public:
  int itemNum;
  Knapsack* next;
  Knapsack(int);
  ~Knapsack();
};

#endif
