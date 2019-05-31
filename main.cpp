/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: main file - program begins and ends here
*********************************************************************/
#include "Menu.hpp"

int main()
{
  int choice = 0;
  Menu start;
  do {
    start.welcomeMenu();
    start.gameRulesB();
    start.explainKnapsack();
    start.explainExtras();
    start.gameRulesM();
    start.gamePlay();
    if (start.levelMPassed())
    {
      start.gameRulesF();
    }
    else if (start.levelFPassed())
    {
      start.gameRulesC();
    }
    else if (start.levelCPassed())
    {
      start.win();
    }
    else
    {
      start.lose();
    }
    start.exitMenu();
    choice = start.inputValidation(1, 2);
  } while (choice != 2);
  return 0;
}
