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
  char map[9][12];
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  Space* user;
  Knapsack* front;
  Knapsack* rear;
  string s;
  string t;
  string w;
  string f;
  string c;
  string e;
  string salm;
  string b;
  bool bearsNearby;
public:
  Board();
  ~Board();
  bool isEmpty();
  void moveUser();
  void displayNine();
  void printHidden();
  void printFull();
  void addToSack(int);
  void printSack();
  void deleteItem(int);
  void feedBears();
  void offerItem(int);
  void keep(int);
  void drop();
  void checkKnapsack();
  bool levelMPassed();
  bool levelFPassed();
  bool levelCPassed();
  bool bearImmunity();
};

#endif
