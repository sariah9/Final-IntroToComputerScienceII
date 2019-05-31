/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Menu class header file 
*********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:
  Board play;
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
  bool levelMPassed();
  bool levelFPassed();
  bool levelCPassed();
  void exitMenu();
  void callBoard();
};

#endif
