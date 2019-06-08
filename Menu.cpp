/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description:  Menu class implementation file 
*********************************************************************/
#include "Menu.hpp"
/*********************************************************************
** Function: Menu constructor
** Description: initializes value itemType to 0 - others are trout:1,
** wood:2, sailor:3, flashlight:4, crystal:5, egg:6, salmon:7
** Parameters: None
** Returns: None
*********************************************************************/
Menu::Menu()
{
  itemType = 0;
  numMoves = 0;
  choice = 0;
}
/*********************************************************************
** Function: inputValidation
** Description: validates user input for numerical range
** Parameters: int minimum, int maximum
** Returns: validated integer
*********************************************************************/
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
    return input;
}
/*********************************************************************
** Function: welcomeMenu
** Description: announces welcome and game objective
** Parameters: None
** Returns: None
*********************************************************************/
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
/*********************************************************************
** Function: gameRulesB
** Description: explains 'shoot' aspect of game - dangers that affect
** user
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::gameRulesB()
{
  cout << "The most important thing to know about Triad Town \n"
       << "is that there are wild creatures living in the area. \n"
       << "They prefer salmon, but they will happily eat you. " << endl;
  cout << "Best to distract them with a tasty salmon. One \n"
       << "salmon will feed many beasts. Complete three tasks and \n"
       << "achieve immunity to enemies! Salmon are made by collecting \n"
       << "three eggs. Beasts look like this on the map: E " << endl;
} 
/*********************************************************************
** Function: gameRulesM
** Description: explains Mountain level objective
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::gameRulesM()
{
  cout << "The first task is to collect enough food for your voyage. " << endl;
  cout << "This is done by collecting trout. Three trout make a boat, " << endl;
  cout << "and three boats will be enough to make a hull. \n"
       << "You must get three boats or you won't be able \n"
       << "to make a ship. The only place to find trout are \n"
       << "in the mountains. But beware of mountain lions..." << endl;
}
/*********************************************************************
** Function: gameRulesF
** Description: explains Forest level objective
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::gameRulesF()
{
  cout << "The next task is to collect enough wood for boat repairs. " << endl;
  cout << "This is accomplished by collecting enough wood for three \n"
       << "barrels. Three wood make one barrel, and three barrels  " << endl;
  cout << "make a deck. The best place to find wood is in the forest. \n"
       << "Remember to be on the lookout for bears... " << endl;
}
/*********************************************************************
** Function: gameRulesC
** Description: explains Coast level objective
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::gameRulesC()
{
  cout << "The third and final task is to collect sailors. " << endl;
  cout << "That's right, you need some savvy swashbuckling \n"
       << "seafarers. You guessed it, you will ultimately \n"
       << "need nine sailors - three per crew of sailors. " << endl;
  cout << "Three crew make a mast, and that's very important! " << endl;
  cout << "Sailors always hang around the coast, dreaming \n"
       << "of the sea. Keep a wary eye out for trolls..." << endl;
}
/*********************************************************************
** Function: explainKnapsack
** Description: explains the container and keep/drop idea to user
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::explainKnapsack()
{
  cout << "You have a knapsack that you carry with you. " << endl;
  cout << "This knapsack has brought you much good fortune.\n"
       << "It holds 8 items, which you can use to collect \n"
       << "items necessary for your journey. You can either \n"
       << "collect 3 items in the knapsack to make a new item, \n"
       << "or drop an item on the ground from your knapsack. " << endl;
  cout << "If you drop a trout on the ground and there are \n"
       << "at least two other trout on the map, this will \n"
       << "make a boat. If you drop an egg and there are \n"
       << "at least two other eggs on the map, you just \n"
       << "made a salmon! And so on, and so on... " << endl;
  cout << "Don't forget! You only have room for 8 items. " << endl;
}
/*********************************************************************
** Function: explainExtras
** Description: explains extra tools and location of items to user
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::explainExtras()
{
  cout << "There are a few helpful tools you may come across." << endl;
  cout << "These tools will be amongst items randomly offered \n"
       << "to you at each move on the map. One is a crystal. " << endl;
  cout << "Alchemy crystals are very rare and can transform \n"
       << "any other two items (when dropped) into something \n"
       << "greater. They must be dropped along the way in \n"
       << "order to use them. Found only near mountains." << endl;
  cout << "Another tool is a flashlight. This will help you \n"
       << "to complete a task. So keep it handy. This is the \n"
       << "same with the corked bottle so carefully consider \n"
       << "the best places to use them. Remember that by \n"
       << "completing 3 tasks, you will be safe from beasts. " << endl;
}
/*********************************************************************
** Function: gamePlay
** Description: calls Board class functions to run game
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::gamePlay()
{
  int choice = 0;
  //play.linkSpaces(numMoves);
  //play.moveUser(numMoves);
  //play.printBoard(numMoves);
  //play.boardPopulate(numMoves);
  play.beginPlay(1);
  play.printSack();
  while (numMoves < 4)
  {
    callBoard();
    numMoves++;
    play.moveUser(numMoves);
    play.printBoard(numMoves);
  }
  if (play.levelMPassed())
  {
    lose(3);
    play.beginPlay(2);
    play.printSack();
    while (numMoves < 8)
    {
      callBoard();
      flashlightOption();
      choice = inputValidation(1, 2);
      if (choice == 1)
      {
        int light = numMoves++;
        play.deleteItem(4);
      }
      numMoves++;
      play.moveUser(numMoves);
      play.printBoard(numMoves);
    } 
  }
  else 
  {
    lose(2);
  }
  if (play.levelFPassed())
  {
    lose(3);
    play.beginPlay(3);
    play.printSack();
    while (numMoves < 12)
    {
      callBoard();
      numMoves++;
      play.moveUser(numMoves);
      play.printBoard(numMoves);
    }  
  }
  else 
  {
    lose(2);
  }  
  if (play.levelCPassed())
  {
    lose(3);
  }
  else 
  {
    lose(2);
  }    
}
/*********************************************************************
** Function: exitMenu
** Description: asks user if they would like to play again or quit
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::exitMenu()
{
  cout << "Would you like to: " << endl;
  cout << "1. Play again? " << endl;
  cout << "2. Exit the game? " << endl;
} 
/*********************************************************************
** Function: callBoard
** Description: iterates through Board functions that are the same 
** every move
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::callBoard()
{
  if (play.feedBears())
  {
    listItems();
    keepOrDropMenu();
    choice = inputValidation(1, 2);
    if (choice == 1)
    {
      play.keep(itemType);
    }
    else 
    {
      play.addToSack(itemType);
      play.drop(itemType);
    }
    play.printSack();
    beforeMove();
    choice = inputValidation(1, 8);
    if (choice == 8)
    {
      cout << "Moving along... " << endl;
    }
    else
    {
      play.addToSack(itemType);
      play.drop(choice);
    }
  }
  else
  { 
    bearsMenu();
    choice = inputValidation(1, 2);
    if (choice == 1)
    {
      cout << "Good choice..." << endl;
      play.drop(7);
      listItems();
      keepOrDropMenu();
      choice = inputValidation(1, 2);
      if (choice == 1)
      {
        play.keep(itemType);
      }
      else 
      {
        play.addToSack(itemType);
        play.drop(itemType);
      }
      play.printSack();
      beforeMove();
      choice = inputValidation(1, 8);
      if (choice == 8)
      {
        cout << "Moving along... " << endl;
      }
      else
      {
        play.addToSack(itemType);
        play.drop(choice);
      }
    }
    else 
    {
      lose(1);
    }
  }
}
/*********************************************************************
** Function: lose
** Description: depending on how succesful the player is, this 
** method is called to output status
** Parameters: int type
** Returns: None
*********************************************************************/
void Menu::lose(int type)
{
  if (play.levelCPassed())
  {
    cout << "Congratulations!! You've won the game!!" << endl;
    cout << "You have a ship with a hull, deck, and mast!" << endl;
    cout << "Plus, you have enough sailors for a crew, enough \n"
         << "trout to eat, and enough wood for repairs! " << endl;
    cout << "Now, get ready... Your dream adventure awaits... " << endl;
  }
  else if (play.levelFPassed())
  {
    cout << "Congratulations! You collected enough wood for three barrels!" << endl;
    cout << "That's enough for a deck..." << endl;
  }
  else if (play.levelMPassed())
  {
    cout << "Congratulations! You collected enough trout for three boats!" << endl;
    cout << "That's enough for a hull..." << endl;
  }
  else 
  {
    if (type == 1)
    {
      numMoves = 12;
      cout << "You were eaten by bears and are now, unfortunately, dead..." << endl;
      cout << "You had a brave adventurer's funeral. RIP." << endl;
    }
    else if (type == 2)
    {
      numMoves = 12;
      cout << "Oh no! You have been unsuccessful in your mission." << endl;
      cout << "You did not collect enough items in the time allowed. " << endl;
    }
    else 
    {
      cout << "Fortune smiles on thee... " << endl;
    }
  }
}
/*********************************************************************
** Function: listItems
** Description: depending on random offer from Board class, this 
** method outputs what the item is 
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::listItems()
{
  int item = play.offerItem();
  cout << "You found an item! " << endl;
  if (item == 1)
  {
    if (play.levelFPassed())
    {
      cout << "It's a sailor!" << endl;
      itemType = 3;
    }
    else if (play.levelMPassed())
    {
      cout << "It's some wood!" << endl;
      itemType = 2;
    }
    else 
    {
      cout << "It's a trout!" << endl;
      itemType = 1;
    }
  }
  else if (item == 3)
  {
    if (play.levelFPassed())
    {
      cout << "It's a salmon!" << endl;
      itemType = 7;
    }
    else if (play.levelMPassed())
    {
      cout << "It's a flashlight!" << endl;
      itemType = 4;
    }
    else 
    {
      cout << "It's a crystal!" << endl;
      itemType = 5;
    }
  }
  else if (item == 2)
  {
    cout << "It's an egg!" << endl;
    itemType = 6;
  }
}
/*********************************************************************
** Function: bearsMenu()
** Description: announces when there are bears and asks user to
** choose salmon or death
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::bearsMenu()
{
  cout << "There are bears nearby. You can either: " << endl;
  cout << "1. Throw a salmon to the bears. " << endl;
  cout << "2. Be eaten yourself. " << endl;
}
/*********************************************************************
** Function: keepOrDropMenu()
** Description: prompts user to choose to keep or drop random items
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::keepOrDropMenu()
{
  cout << "You may choose what to do with this item." << endl;
  cout << "1. Add the item to the sack." << endl;
  cout << "2. Drop the item. " << endl;
}
/*********************************************************************
** Function: flashlightOption
** Description: asks user if want to use flashlight
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::flashlightOption()
{
  cout << "Would you like to use a flashlight? " << endl;
  cout << "1. Yes" << endl;
  cout << "2. No " << endl;
}
/*********************************************************************
** Function: beforeMove
** Description: offers user the chance to drop any other items 
** Parameters: None
** Returns: None
*********************************************************************/
void Menu::beforeMove()
{
  cout << "Would you like to drop any other items from your sack? " << endl;
  cout << "1. trout" << endl;
  cout << "2. wood " << endl;
  cout << "3. sailor" << endl;
  cout << "4. flashlight " << endl;
  cout << "5. crystal" << endl;
  cout << "6. egg" << endl;
  cout << "7. salmon " << endl;
  cout << "8. No thanks " << endl;
}
