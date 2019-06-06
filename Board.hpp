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
using std::cin;
using std::cout;
using std::endl;

class Board
{
private:
  char boardMap[9][12];
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  Space* user;
  Knapsack* front;
  Knapsack* rear;
  bool bearsNearby;
  int boat, barrel, crew;
  int sackSize;
public:
  Board();
  ~Board();
  bool isEmpty();
  void moveUser(int);
  void linkSpaces();
  void displayNine();
  void printHidden();
  void printFull();
  void addToSack(int);
  void printSack();
  void deleteItem(int);
  void offerItem();
  void keep(int);
  void drop(int);
  void checkKnapsack();
  void clearSack(int);
  bool levelMPassed();
  bool levelFPassed();
  bool levelCPassed();
  bool feedBears();
  void beginPlay(int);
};

#endif
