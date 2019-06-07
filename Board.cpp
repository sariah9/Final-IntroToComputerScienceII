/*********************************************************************
** Program name: Final Project - Triad Town Loot and Shoot
** Author: Sariah Bunnell 
** Date:  May 30 2019
** Description: Board class implementation file 
*********************************************************************/
#include "Board.hpp"
/*********************************************************************
** Function: Board constructor
** Description: initializes values and creates new instances of each 
** level
** Parameters: None
** Returns: None
*********************************************************************/
Board::Board()
{
  mtnPtr = nullptr;
  forestPtr = nullptr;
  coastPtr = nullptr;
  user = nullptr;
  front = nullptr;
  rear = nullptr;
  boat = 0;
  barrel = 0;
  crew = 0;
  sackSize = 0;
}
/*********************************************************************
** Function: Board destructor
** Description: frees memory 
** Parameters: None
** Returns: None
*********************************************************************/
Board::~Board()
{
  Knapsack* trash = front;
  while (trash != nullptr)
  {
    front = front->next;
    trash->next = nullptr;
    delete trash;
    trash = front;
  }
  Space* garbage = mtnPtr;
  for (int i = 0; i < 4; i++)
  {
    mtnPtr = mtnPtr->left;
    delete garbage;
    garbage = mtnPtr;
  }
  Space* garbageF = forestPtr;
  for (int j = 0; j < 4; j++)
  {
    forestPtr = forestPtr->right;
    delete garbageF;
    garbageF = forestPtr;
  }
  Space* garbageC = coastPtr;
  for (int k = 0; k < 4; k++)
  {
    coastPtr = coastPtr->left;
    delete garbageC;
    garbageC = coastPtr;
  }
  user = nullptr;
}
/*********************************************************************
** Function: isEmpty
** Description: returns true when there are no items in the Knapsack
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::isEmpty()
{
  if (front == nullptr)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: moveUser
** Description: for each move on the board, the user pointer is 
** changed accordingly and Space is introduced
** Parameters: int move
** Returns: None
*********************************************************************/
void Board::moveUser(int move)
{
  if (move == 0)
  {
    user->words();
  }
  else if (move >= 1 || move <= 3)
  {
    user = user->left;
  }
  else if (move == 4)
  {
    user = user->up;
    user->words();
  }
  else if (move >= 5 || move <= 7)
  {
    user = user->right;
  }
  else if (move == 8)
  {
    user = user->up;
    user->words();
  }
  else if (move == 9 || move == 10)
  {
    user = user->left;
  }
  else if (move == 11)
  {
    user = user->left;
  }
}
/*********************************************************************
** Function: linkSpaces
** Description: makes links of Spaces in list
** Parameters: None
** Returns: None
*********************************************************************/
void Board::linkSpaces()
{
  mtnPtr = new Mountain();
  user = mtnPtr;
  user->boardPopulate(0);
  for (int i = 1; i < 3; i++)
  {
    mtnPtr->left = new Mountain();
    mtnPtr = mtnPtr->left;
    mtnPtr->boardPopulate(i);
  }
  forestPtr = mtnPtr->up;
  forestPtr = new Forest();
  forestPtr->boardPopulate(4);
  for (int j = 5; j < 7; j++)
  {
    forestPtr->right = new Forest();
    forestPtr = forestPtr->right;
    forestPtr->boardPopulate(j);
  }
  coastPtr = forestPtr->up;
  coastPtr = new Coast();
  coastPtr->boardPopulate(8);
  for (int k = 9; k < 11; k++)
  {
    coastPtr->left = new Coast();
    coastPtr = coastPtr->left;
    coastPtr->boardPopulate(k);
  }
  coastPtr = forestPtr->up;
  forestPtr = mtnPtr->up;
  mtnPtr = user;
}
/*********************************************************************
** Function: printBoard
** Description: outputs information each turn
** Parameters: int move to indicate where player is
** Returns: None
*********************************************************************/
void Board::printBoard(int move)
{
  int bears = user->getBears();
  int eggs = user->getEggs();
  int items = user->getItems();
  cout << "Move: " << move << endl;
  cout << "There are " << bears << " bears nearby." << endl;
  cout << "There are " << eggs << " eggs nearby." << endl;
  if (move >= 0 || move < 4)
  {
    cout << "There are " << items << " trout nearby." << endl;
  }
  else if (move >= 4 || move < 8)
  {
    cout << "There are " << items << " wood nearby." << endl;
  }
  else if (move >= 8 || move < 12)
  {
    cout << "There are " << items << " sailors nearby." << endl;
  }
  cout << endl;
}
/*********************************************************************
** Function: addToSack
** Description: adding items to circular queue Knapsack
** Parameters: int val that will be equal to itemNum
** Returns: None
*********************************************************************/
void Board::addToSack(int val)
{
  if (sackSize > 8)
  {
    cout << "Sorry. There's no more space in your bag." << endl;
    cout << "You can only carry 8 items." << endl;
  }
  else
  {
    Knapsack* newPtr = new Knapsack(val);
    if (isEmpty())
    {
      front = newPtr;
      front->next = front;
      rear = front;
      sackSize++;
    }
    else if (front->next == front)
    {
      front->next = newPtr;
      rear = newPtr;
      rear->next = front;
      sackSize++;
    }   
    else
    {
      rear->next = newPtr;
      rear = newPtr;
      rear->next = front;
      sackSize++;
    }
  }
}
/*********************************************************************
** Function: printSack
** Description: prints items in Knapsack queue
** Parameters: None
** Returns: None
*********************************************************************/
void Board::printSack()
{
  string s = "sailor";
  string t = "trout";
  string w = "wood";
  string f = "flashlight";
  string c = "crystal";
  string e = "egg";
  string salm = "salmon";
  Knapsack* itemPtr = front;
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    cout << "Knapsack items: ";
    do {
      if (itemPtr->itemNum == 1)
      {
        cout << "One " << t << endl;
      }
      else if (itemPtr->itemNum == 2)
      {
        cout << "One " << w << endl;
      }
      else if (itemPtr->itemNum == 3)
      {
        cout << "One " << s << endl;
      }
      else if (itemPtr->itemNum == 4)
      {
        cout << "One " << f << endl;
      }
      else if (itemPtr->itemNum == 5)
      {
        cout << "One " << c << endl;
      }
      else if (itemPtr->itemNum == 6)
      {
        cout << "One " << e << endl;
      }
      else 
      {
        cout << "One " << salm << endl;
      }
      itemPtr = itemPtr->next;
    }while (itemPtr != front);
  }
}
/*********************************************************************
** Function: deleteItem
** Description: searches for item by argument, then removes that item 
** from the Knapsack queue
** Parameters: int item
** Returns: None
*********************************************************************/
void Board::deleteItem(int item)
{
  Knapsack* nodePtr = front;
  if (isEmpty())
  {
    cout << "Sorry. Your sack is empty. " << endl;
  }
  else
  {
    if (front->next == front)
    {
      if (front->itemNum == item)
      {
        delete nodePtr;
        front = nullptr;
        rear = nullptr;
        sackSize--;
      }
    }
    else
    {
      if (front->itemNum == item)
      {
        front = front->next;
        delete nodePtr;
        rear->next = front;
        sackSize--;
      }
      else 
      {
        Knapsack* prevPtr = nodePtr;
        while (nodePtr->next != front && nodePtr->itemNum != item)
        {
          prevPtr = nodePtr;
          nodePtr = nodePtr->next;
        }
        if (nodePtr->itemNum == item)
        {
          prevPtr->next = nodePtr->next;
          delete nodePtr;
          sackSize--;
        }
      }
    }
  }
  nodePtr = nullptr;
}
/*********************************************************************
** Function: clearSack
** Description: deletes all items of a specific type - used to change 
** Space levels
** Parameters: int type
** Returns: None
*********************************************************************/
void Board::clearSack(int type)
{
  for (int i = 0; i < sackSize; i ++)
  {
    deleteItem(type);
  }
}
/*********************************************************************
** Function: offerItem
** Description: generates random number which sets random offer each 
** move 
** Parameters: None
** Returns: number that represents item type
*********************************************************************/
int Board::offerItem()
{
  int random = (rand() % 4) + 1;
  if (random == 1)
  {
    return 1;//item
  }
  else if (random == 2)
  {
    return 2;//egg
  }
  else if (random == 3)
  {
    return 3;//extra 
  }
  else 
  {
     return 1;//item
  }
}
/*********************************************************************
** Function: keep
** Description: adds item to knapsack and then checks if sack has 
** triples
** Parameters: int item
** Returns: None
*********************************************************************/
void Board::keep(int item)
{
  addToSack(item);
  checkKnapsack();
}
/*********************************************************************
** Function: drop
** Description: calculates whether dropped item makes a triple and 
** calls other functions or increments objectives accordingly
** Parameters: int item
** Returns: int that is used to determine user message
*********************************************************************/
void Board::drop(int item)
{
  int boardItem = user->getItems();
  int boardEggs = user->getEggs();
  deleteItem(item);
  if (item == 1 || item == 2 || item == 3)
  {
    if (boardItem >= 2)
    {
      if (levelFPassed())
      {
        crew++;
        cout << "You made a crew! " << endl;
      }
      else if (levelMPassed())
      {
        barrel++;
        cout << "You made a barrel! " << endl;
      }
      else
      {
        boat++;
        cout << "You made a boat! " << endl;
      }
    }
  }
  else if (item == 5)
  {
    if (boardItem >= 2)
    {
      if (levelFPassed())
      {
        crew++;
        cout << "You made a crew! " << endl;
      }
      else if (levelMPassed())
      {
        barrel++;
        cout << "You made a barrel! " << endl;
      }
      else
      {
        boat++;
        cout << "You made a boat! " << endl;
      }
    }
    else if (boardEggs >= 2)
    {
      cout << "A salmon has been added to your bag! " << endl;
      addToSack(7);
    }
  }
  else if (item == 6)
  {
    if (boardEggs >= 2)
    {
      cout << "A salmon has been added to your bag! " << endl;
      addToSack(7);
    }
  }
  else
  {
    cout << "Item left behind." << endl;
  }
}
/*********************************************************************
** Function: checkKnapsack
** Description: determines if there are triples in Knapsack - if so,
** it adds thos triples to make something new and better
** Parameters: None
** Returns: None
*********************************************************************/
void Board::checkKnapsack()
{
  int troutNum = 0, woodNum = 0, sailorNum = 0;
  int eggNum = 0, salmonNum = 0;
  Knapsack* itemPtr = front;
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    do {
      if (itemPtr->itemNum == 1)
      {
        troutNum++;
      }
      else if (itemPtr->itemNum == 2)
      {
        woodNum++;
      }
      else if (itemPtr->itemNum == 3)
      {
        sailorNum++;
      }
      else if (itemPtr->itemNum == 6)
      {
        eggNum++;
      }
      else if (itemPtr->itemNum == 7)
      {
        salmonNum++;
      }
      itemPtr = itemPtr->next;
    }while (itemPtr != front);
  }
  if (troutNum >= 3)
  {
    boat++;
    cout << "You made a boat! " << endl;
    deleteItem(1);
    deleteItem(1);
    deleteItem(1);
  }
  else if (woodNum >= 3)
  {
    barrel++;
    cout << "You made a barrel! " << endl;
    deleteItem(2);
    deleteItem(2);
    deleteItem(2);
  }
  else if (sailorNum >= 3)
  {
    crew++;
    cout << "You made a crew! " << endl;
    deleteItem(3);
    deleteItem(3);
    deleteItem(3);
  }
  else if (eggNum >= 3)
  {
    addToSack(7);
    cout << "You made a salmon! " << endl;
    deleteItem(6);
    deleteItem(6);
    deleteItem(6);
  }
  else if (salmonNum >= 3)
  {
    user->setSalmon(3);
    cout << "You gained bear immunity! " << endl;
    cout << "Bears will no longer be a hazard to you. " << endl;
    deleteItem(7);
    deleteItem(7);
    deleteItem(7);
  }
}
/*********************************************************************
** Function: levelMPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelMPassed()
{
  if (boat >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: levelFPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelFPassed()
{
  if (barrel >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: levelCPassed
** Description: returns true if player beat the level and gained 
** objective, otherwise returns false
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::levelCPassed()
{
  if (crew >= 3)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: feedBears
** Description: determines whether there are bears nearby 
** Parameters: None
** Returns: true or false
*********************************************************************/
bool Board::feedBears()
{
  if (user->getBears() == 0)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: beginPlay
** Description: beginning of each Space level - deletes old items 
** from Knapsack, then adds new ones
** Parameters: int level 
** Returns: None
*********************************************************************/
void Board::beginPlay(int level)
{
  if (level == 1)
  {
    cout << "You have new items in your knapSack!" << endl;
    addToSack(1);
    addToSack(1);
    addToSack(6);
    addToSack(6);
    addToSack(7);
    addToSack(7);
    addToSack(5);
  }
  else if (level == 2)
  {
    cout << "You have new items in your knapSack!" << endl;
    clearSack(1);
    addToSack(4);
    addToSack(2);
    addToSack(6);
    addToSack(7);
  }
  else if (level == 3)
  {
    cout << "You have new items in your knapSack!" << endl;
    clearSack(2);
    addToSack(3);
    addToSack(3);
    addToSack(7);
  }
}
