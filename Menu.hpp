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
