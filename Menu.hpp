/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Menu class header file 
*********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include "Board.hpp"
#include <sstream>
using std::cin;
using std::cout;
using std::endl;

class Menu
{
private:
  Board play;
  int itemType;
  int numMoves;
  int choice;
public:
  Menu();
  int inputValidation(int, int);
  void welcomeMenu();
  void gameRulesB();
  void gameRulesM();
  void gameRulesF();
  void gameRulesC();
  void explainKnapsack();
  void explainExtras();
  void gamePlay();
  void exitMenu();
  void callBoard();
  void lose(int);
  void listItems();
  void beastMenu();
  void keepOrDropMenu();
  void flashlightOption();
  void beforeMove();
};

#endif
