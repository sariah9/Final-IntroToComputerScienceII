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
  s = "sailor";
  t = "trout";
  w = "wood";
  f = "flashlight";
  c = "crystal";
  e = "egg";
  salm = "salmon";
  b = "bear";
  bearsNearby = true;
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
  Knapsack* garbage = front;
  while (garbage != nullptr)
  {
    front = front->next;
    garbage->next = nullptr;
    delete garbage;
    garbage = front;
  }
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
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::moveUser()
{
  //change bearsNearby = true;
  int move = 0;
  //somehow set user to mtnPtr->left or forest->right
  mtnPtr = new Mountain;
  forestPtr = new Forest;
  coastPtr = new Coast;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::linkSpaces()
{
  mtnPtr = new Mountain();
  user = mtnPtr;
  user->boardPopulate(1);
  for (int i = 2; i < 4; i++)
  {
    mtnPtr->left = new Mountain();
    mtnPtr = mtnPtr->left;
    mtnPtr->boardPopulate(i);
  }
  forestPtr = mtnPtr->up;
  forestPtr = new Forest();
  forestPtr->boardPopulate(1);
  for (int j = 2; j < 4; j++)
  {
    forestPtr->right = new Forest();
    forestPtr = forestPtr->right;
    forestPtr->boardPopulate(j);
  }
  coastPtr = forestPtr->up;
  coastPtr = new Coast();
  coastPtr->boardPopulate(1);
  for (int k = 2; k < 4; k++)
  {
    coastPtr->left = new Coast();
    coastPtr = coastPtr->left;
    coastPtr->boardPopulate(k);
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::displayNine(int move)
{
  if (move == 0)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 6; y < 8; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 1)
  {
    for(int x = 6; x < 8; x++)
    {
      for (int y = 6; y < 8; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 2)
  {
    for(int x = 3; x < 5; x++)
    {
      for (int y = 6; y < 8; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 3)
  {
    for(int x = 0; x < 2; x++)
    {
      for (int y = 6; y < 8; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 4)
  {
    for(int x = 0; x < 2; x++)
    {
      for (int y = 3; y < 5; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 5)
  {
    for(int x = 3; x < 5; x++)
    {
      for (int y = 3; y < 5; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 6)
  {
    for(int x = 6; x < 8; x++)
    {
      for (int y = 3; y < 5; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 7)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 3; y < 5; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 8)
  {
    for(int x = 9; x < 11; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 9)
  {
    for(int x = 6; x < 8; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 10)
  {
    for(int x = 3; x < 5; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
  else if (move == 11)
  {
    for(int x = 0; x < 2; x++)
    {
      for (int y = 0; y < 2; y++)
      {
        boardMap[y][x] = Space::map[y][x];
        cout << boardMap[y][x];
      }
    }
    cout << endl;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printHidden()
{
  for(int x = 0; x < 11; x++)
  {
    for (int y = 0; y < 8; y++)
    {
      boardMap = ' ';
      cout << boardMap[x][y];
    }
  }
  cout << endl;
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printFull()
{
  for(int x = 0; x < 11; x++)
  {
    for (int y = 0; y < 8; y++)
    {
      cout << boardMap[x][y];
    }
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
  if (sackSize > 6)
  {
    cout << "Sorry. There's no more space in your bag." << endl;
    cout << "You can only carry 6 items." << endl;
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
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::printSack()
{
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
        cout "One " << w << endl;
      }
      else if (itemPtr->itemNum == 3)
      {
        cout "One " << s << endl;
      }
      else if (itemPtr->itemNum == 4)
      {
        cout "One " << f << endl;
      }
      else if (itemPtr->itemNum == 5)
      {
        cout "One " << c << endl;
      }
      else if (itemPtr->itemNum == 6)
      {
        cout "One " << e << endl;
      }
      else 
      {
        cout << "One " << salm << endl;
      }
      itemPtr = itemPtr->next;
    }
  }  while (itemPtr != front);
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::deleteItem(int item)
{
  Knapsack* nodePtr = head;
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
** Function:
** Description: 
** Parameters:
** Returns: 
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
     return 4;//item
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
int Board::drop(int item)
{
  int boardItem = user->getItems();
  int boardEggs = user->getEggs();
  int boardBears = user->getBears();
  deleteItem(item);
  if (item == 1 || item == 2 || item == 3)
  {
    if (boardItem >= 2)
    {
      if (levelFPassed())
      {
        crew++;
      }
      else if (levelMPassed())
      {
        barrel++;
      }
      else
      {
        boat++;
      }
      return 1;
    }
    else 
    {
      return 0;
    }
  }
  else if (item == 5)
  {
    if (boardItem >= 2)
    {
      if (levelFPassed())
      {
        crew++;
      }
      else if (levelMPassed())
      {
        barrel++;
      }
      else
      {
        boat++;
      }
      return 1;
    }
    else if (boardEggs >= 2)
    {
      addToSack(7);
      return 2;
    }
    else 
    {
      return 0;
    }
  }
  else if (item == 6)
  {
    if (boardEggs >= 2)
    {
      addToSack(7);
      return 2;
    }
    else 
    {
      return 0;
    }
  }
  else if (item == 7)
  {
    bearsNearby = false;
    return 3;
  }
  else 
  {
    return 0;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
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
    }
  }  while (itemPtr != front);
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
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
bool Board::feedBears()
{
  if (bearsNearby == false)
  {
    return true;
  }
  else if (user->getBears() == 0)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function:
** Description: 
** Parameters:
** Returns: 
*********************************************************************/
void Board::beginPlay()
{
}
