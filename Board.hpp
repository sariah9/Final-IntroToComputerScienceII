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
#include <string>
using std::string;

class Board
{
private:
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  Space* user;
  Knapsack* front;
  Knapsack* rear;
  int boat, barrel, crew;
  int sackSize, eggCount;
  int enemyCount, itemCount;
public:
  Board();
  ~Board();
  bool isEmpty();
  void moveUser(int);
  void linkSpaces(int);
  void selectNum();
  void boardPopulate(int);
  void printBoard(int);
  void addToSack(int);
  void printSack();
  void deleteItem(int);
  void clearSack(int);
  int offerItem();
  void keep(int);
  void drop(int);
  void checkKnapsack();
  bool levelMPassed();
  bool levelFPassed();
  bool levelCPassed();
  bool feedEnemies();
  void beginLevel(int);
  void beginPlay(int);
  void callTask(int);
};

#endif
