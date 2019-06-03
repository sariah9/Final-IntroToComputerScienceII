/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Board class header file 
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP
#include "Space.hpp"
#include "Mountain.hpp"
#include "Forest.hpp"
#include "Coast.hpp"
#include "Knapsack.hpp"
#include <queue>
using std::queue;

class Board
{
private:
  char map[9][12];
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  queue<char> knapSack;
  Space* user;
  Knapsack* front;
  Knapsack* rear;
public:
  Board();
  ~Board();
  bool isEmpty();
  void moveUser();
  void displayNine();
  void printHidden();
  void printFull();
  void printSack();
  void deleteItem();
  void feedBears();
  void offerItem(int);
  void keep();
  void drop();
  bool levelMPassed();
  bool levelFPassed();
  bool levelCPassed();
  void countBarrels();
};

#endif
