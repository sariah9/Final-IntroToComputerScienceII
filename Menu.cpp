/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description:  Menu class implementation file 
*********************************************************************/
#include "Menu.hpp"

Menu::Menu()
{
  
}
int Menu::inputValidation(int min, int max)
{
  double input;
  bool repeatEntry = true;
  char errorTest;
  string inputLine;
  while (repeatEntry) {
      getline(cin, inputLine);
      std::stringstream lineStream(inputLine);
      if (!(lineStream >> input)) {
          cout << "Input was not a number. Please try again." << endl;
      } else if ((input < min) || (input > max)) {
          cout << "Input out of range. Please try again." << endl;
      } else if (input - static_cast<int>(input) != 0) {
          cout << "Input with decimals and not an integer. Please try again." << endl;
      } else if (lineStream >> errorTest) {
          cout << "Input with extra symbols and/or characters. Please try again." << endl;
      } else {
          repeatEntry = false;
      }  
}
void Menu::welcomeMenu()
{
  cout << "Welcome to Triad Town! " << endl;
  cout << "A land of Mountains, Forests, and Coasts! \n"
       << "You have aspirations of becoming a sea captain, \n"
       << "sailing out into the sea with nothing to bring \n"
       << "you back but your sturdy shipping vessel. " << endl;
  cout << "You wish to be a seafaring merchant, \n"
       << "but in order to make that dream a reality, \n"
       << "you must own a fleet of ships. " << endl;
  cout << "Not to worry. Triad Town has everything you need! " << endl;
}
void Menu::gameRulesB()
{
  cout << "The most important thing to know about Triad Town \n"
       << "is that there are bears living in the area. They \n"
       << "prefer salmon, but they will happily eat you. " << endl;
  cout << "Best to distract them with a tasty salmon. One \n"
       << "salmon will feed 3 bears, and three salmon will \n"
       << "give you bear immunity! Salmon are made by collecting \n"
       << "three eggs. Eggs look like this on the map: o " << endl;
  cout << "Bears look like this: & " << endl;
} 
void Menu::gameRulesM()
{
  cout << "The first task is to collect enough food for your voyage. " << endl;
  cout << "This is done by collecting trout. Trout look like this on the map: % " << endl;
  cout << "Three trout make a barrel of food, and three barrels will be enough \n"
       << "to last your fleet for many months. You must get three barrels or \n"
       << "your men and yourself may starve. The only place to find trout are \n"
       << "in the mountains. But beware of bears..." << endl;
}   
void Menu::gameRulesF()
{
  cout << "The next task is to collect enough wood for boat repairs. " << endl;
  cout << "This is accomplished by collecting enough wood for three \n"
       << "barrels. Three wood fill one barrel. Wood looks like this: # " << endl;
  cout << "The best place to find wood is in the forest. Remember to \n"
       << "collect 3 per barrel, and be on the lookout for bears... " << endl;
}
void Menu::gameRulesC()
{
  cout << "The third and final task is to collect sailors. " << endl;
  cout << "That's right, you need some savvy swashbuckling \n"
       << "seafarers. You guessed it, you will ultimately \n"
       << "need nine sailors - three per barrel of sailors. " << endl;
  cout << "Sailors always hang around the coast, dreaming \n"
       << "of the sea. They look like this on the map: + " << endl;
  cout << "Remember to keep a wary eye out for bears... " << endl;
}
void Menu::explainKnapsack()
{
  cout << "You have a knapsack that you carry with you. " << endl;
  cout << "This knapsack has brought you much good fortune.\n"
       << "It holds six items, which you can use to collect \n"
       << "items necessary for your journey. You can either \n"
       << "collect 3 items in the knapsack to make a barrel, \n"
       << "or drop an item on the ground from your knapsack. " << endl;
  cout << "If you drop a trout on the ground and there are \n"
       << "at least two other trout on the map, this will \n"
       << "make a barrel of trout. If you drop an egg and \n"
       << "there are at least two other eggs on the map you \n"
       << "just made a salmon! And so on, and so on... " << endl;
  cout << "Don't forget! You only have room for 6 items. " << endl;
}
void Menu::explainExtras()
{
  cout << "There are a few helpful tools you may come across." << endl;
  cout << "These tools will be amongst items randomly offered \n"
       << "to you at each move on the map. One is a crystal. " << endl;
  cout << "Alchemy crystals are very rare and can transform \n"
       << "any other two items ON THE MAP into something \n"
       << "greater. They must be dropped on the map in \n"
       << "order to use them. " << endl;
  cout << "The other tool is a flashlight. This allows you \n"
       << "to see a wider view of the landscape. Flashlights \n"
       << "are also pretty rare, so carefully consider the \n"
       << "best places to use them. " << endl;
}
void Menu::gamePlay()
{
  //call board functions here
}
bool Menu::levelMPassed()
{
  //return true if Mountain has 3 barrels, else false
}
bool Menu::levelFPassed()
{

}
bool Menu::levelCPassed()
{

}
void Menu::exitMenu()
{
  cout << Would you like to: " << endl;
  cout << "1. Play again? " << endl;
  cout << "2. Exit the game? " << endl;
}  
void Menu::callBoard()
{
}
