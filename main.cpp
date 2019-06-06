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
    cout << endl;
    start.gameRulesB();
    cout << endl;
    start.explainKnapsack();
    cout << endl;
    start.explainExtras();
    cout << endl;
    start.gameRulesM();
    cout << endl;
    start.gameRulesF();
    cout << endl;
    start.gameRulesC();
    cout << endl;
    cout << "Let's begin... " << endl;
    start.gamePlay();
    start.exitMenu();
    choice = start.inputValidation(1, 2);
  } while (choice != 2);
  return 0;
}
