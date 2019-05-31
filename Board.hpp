/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Board class header file 
*********************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

class Board
{
private:
  map[9][12];
  Space* mtnPtr;
  Space* forestPtr;
  Space* coastPtr;
  queue<char> knapSack;
public:
  Board();
  ~Board();
  void moveUser();
  void boardPopulate();
  void displayNine();
  void displayTwFive();
  void printHidden();
  void printFull();
  void randomOffer();
  void printSack();
  void deleteItem();
  void feedBears();
  void keepOrDropMenu();
};

#endif
