/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: main file - program begins and ends here
*********************************************************************/
#include "Menu.hpp"
#include <ctime>

int main()
{
  std::srand(time(0));
  int choice = 0;
  Menu start;
  do {
    start.welcomeMenu();
    system("pause");
    cout << endl;
    start.gameRulesB();
    system("pause");
    cout << endl;
    start.explainKnapsack();
    system("pause");
    cout << endl;
    start.explainExtras();
    system("pause");
    cout << endl;
    start.gameRulesM();
    system("pause");
    cout << endl;
    start.gameRulesF();
    system("pause");
    cout << endl;
    start.gameRulesC();
    system("pause");
    cout << endl;
    cout << "Let's begin... " << endl;
    start.gamePlay();
    start.exitMenu();
    choice = start.inputValidation(1, 2);
  } while (choice != 2);
  return 0;
}
