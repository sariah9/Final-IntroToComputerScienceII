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
  enemyCount = 0;
  itemCount = 0;
  eggCount = 0;
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
  switch(move)
  {
    case 0:
    case 4:
    case 8:
      user->words();
      break;
    case 1:
    case 2:
    case 10:
    case 11:
      user = user->left;
      break;
    case 3:
    case 9:
      user = user->left;
      user->printTask();
      break;
    case 5:
      user = user->right;
      user->printTask();
      break;
    case 6:
    case 7:
      user = user->right;
      break;
    default:
      std::cout << "invalid input for moving user: " << move << std::endl;
      break;
  }
}
/*********************************************************************
** Function: linkSpaces
** Description: makes creates new Spaces depending on move number
** Parameters: int move
** Returns: None
*********************************************************************/
void Board::linkSpaces(int move)
{
  Space* levelOne = new Mountain();
  Space* levelTwo = new Forest();
  Space* levelThree = new Coast;
  if (move == 0)
  {
    mtnPtr = levelOne;
    user = mtnPtr;
  }
  else if (move >= 1 && move <= 3)
  {
    mtnPtr->left = new Mountain();
    mtnPtr = mtnPtr->left;
  }
  else if (move == 4)
  {
    forestPtr = new Forest();
    user = forestPtr;
  }
  else if (move >= 5 && move <= 7)
  {
    forestPtr->right = new Forest();
    forestPtr = forestPtr->right;
  }
  else if (move == 8)
  {
    coastPtr = new Coast();
    user = coastPtr;
  }
  else if (move == 9 || move == 10)
  {
    coastPtr->left = new Coast();
    coastPtr = coastPtr->left;
  }
  else if (move == 11)
  {
    coastPtr->left = new Coast();
    coastPtr = coastPtr->left;
    user = coastPtr;
    coastPtr = levelThree;
    forestPtr = levelTwo;
    mtnPtr = levelOne;
  }
}
/*********************************************************************
** Function: selectNum
** Description: randomly generates number of items, eggs, and enemies
** Parameters: None
** Returns: None
*********************************************************************/
void Board::selectNum()
{
  enemyCount = 0;
  itemCount = 0;
  eggCount = 0;
  int random = (rand() % 3) + 1;
  if  (random  == 1)
  {
    if (user->immunity())
    { 
      enemyCount = 0;
      itemCount = 3;
      eggCount = 3;
    }
    else
    {
      enemyCount = 2;
      itemCount = 2;
      eggCount = 2;
    }
  }
  else if (random == 2)
  {
    enemyCount = 0;
    itemCount = 2;
    eggCount = 2;
  }
  else
  {
    if (user->immunity())
    { 
      enemyCount = 0;
      itemCount = 3;
      eggCount = 3;
    }
    else
    {
      enemyCount = 1;
      itemCount = 3;
      eggCount = 0;
    }
  }
}
/*********************************************************************
** Function: boardPopulate
** Description: randomly fills 3 x 3 grid with pathway and items and 
** enemies
** Parameters: int that represents which move the player is on
** Returns: None
*********************************************************************/
void Board::boardPopulate(int move)
{
  const char enemy = 'E';
  const char path = '<';
  const char item = 'X';
  const char egg = 'o';
  const char player = 'U';
  char gridMove[3][3] = {{'_','_', '_'},
                         {'_', '_', '_'},
                         {'_', '_', '_'}};
   if  (move == 3)
  {
    gridMove[0][1] = path;
    gridMove[1][1] = player;
    gridMove[1][2] = path;
    if (user->immunity())
    { 
      gridMove[0][0] = item;
      gridMove[1][0] = egg;
      gridMove[2][0] = item;
      gridMove[2][1] = egg;
      gridMove[2][2] = item;
      gridMove[0][2] = egg;
    }
    else 
    {
      gridMove[0][0] = egg;
      gridMove[1][0] = egg;
      gridMove[2][0] = enemy;
      gridMove[2][1] = item;
      gridMove[2][2] = item;
      gridMove[0][2] = enemy;
    }
  }
  else if (move == 4)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = player;
    gridMove[1][2] = path;
    if (user->immunity())
    { 
      gridMove[0][0] = item;
      gridMove[0][1] = item;
      gridMove[1][0] = item;
      gridMove[2][0] = egg;
      gridMove[2][2] = egg;
      gridMove[0][2] = egg;
    }
    else
    {
      gridMove[0][0] = egg;
      gridMove[0][1] = egg;
      gridMove[2][0] = enemy;
      gridMove[1][0] = item;
      gridMove[2][2] = item;
      gridMove[0][2] = enemy;
    }
  }
  else if  (move == 7)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = player;
    gridMove[0][1] = path;
    if (user->immunity())
    { 
      gridMove[0][0] = item;
      gridMove[2][1] = egg;
      gridMove[2][0] = item;
      gridMove[2][2] = egg;
      gridMove[1][2] = item;
      gridMove[0][2] = egg;
    }
    else 
    {
      gridMove[0][0] = egg;
      gridMove[2][1] = egg;
      gridMove[2][0] = enemy;
      gridMove[1][2] = item;
      gridMove[2][2] = item;
      gridMove[0][2] = enemy;
    }
  }
  else if  (move == 8)
  {
    gridMove[2][1] = path;
    gridMove[1][1] = player;
    gridMove[1][0] = path;
    if (user->immunity())
    { 
      gridMove[0][0] = item;
      gridMove[0][1] = egg;
      gridMove[2][0] = item;
      gridMove[2][2] = egg;
      gridMove[1][2] = item;
      gridMove[0][2] = egg;
    }
    else
    {
      gridMove[0][0] = enemy;
      gridMove[0][1] = egg;
      gridMove[2][0] = item;
      gridMove[2][2] = egg;
      gridMove[1][2] = item;
      gridMove[0][2] = enemy;
    }
  }
  else 
  {
    gridMove[1][1] = player;
    gridMove[1][0] = path;
    gridMove[1][2] = path;
    if (user->immunity())
    { 
      gridMove[0][0] = item;
      gridMove[0][1] = item;
      gridMove[2][0] = item;
      gridMove[2][1] = egg;
      gridMove[2][2] = egg;
      gridMove[0][2] = egg;
    }
    else
    {
      gridMove[0][0] = item;
      gridMove[0][1] = egg;
      gridMove[2][0] = enemy;
      gridMove[2][1] = item;
      gridMove[2][2] = item;
      gridMove[0][2] = enemy;
    }
  }
  for (int y = 0; y < 3; y++)
  {
    for (int x = 0; x < 3; x++)
    {
      cout << gridMove[y][x] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

/*********************************************************************
** Function: printBoard
** Description: outputs information each turn
** Parameters: int move to indicate where player is
** Returns: None
*********************************************************************/
void Board::printBoard(int move)
{
  selectNum();
  cout << "Move: " << move << endl;
  string type = user->getEnemy();
  cout << "There are " << enemyCount << " " << type << " nearby." << endl;
  cout << "There are " << eggCount << " eggs nearby." << endl;
  if (move >= 0 && move < 4)
  {
    cout << "There are " << itemCount << " trout nearby." << endl;
  }
  else if (move >= 4 && move < 8)
  {
    cout << "There are " << itemCount << " wood nearby." << endl;
  }
  else if (move >= 8 && move < 12)
  {
    cout << "There are " << itemCount << " sailors nearby." << endl;
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
    cout << "Knapsack items: " << endl;
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
      else if (itemPtr->itemNum == 7)
      {
        cout << "One " << salm << endl;
      }
      else 
      {
        cout << "One corked glass bottle. " << endl;
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
        else
        {
          prevPtr = nodePtr;
          prevPtr = nullptr;
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
  int item = user->getItem();
  int random = (rand() % 5) + 1;
  if (random == 1)
  {
    return item;//item
  }
  else if (random == 2)
  {
    return 4;//egg
  }
  else if (random == 3)
  {
    return 5;//extra 
  }
  else if (random == 4)
  {
    return 6;//extra 
  }
  else 
  {
     return item;//item
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
  deleteItem(item);
  if (item == 1 || item == 2 || item == 3)
  {
    if (itemCount >= 2)
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
      itemCount = itemCount - 2;
    }
  }
  else if (item == 5)
  {
    if (itemCount >= 2)
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
      itemCount = itemCount - 2;
    }
    else if (eggCount >= 2)
    {
      cout << "A salmon has been added to your bag! " << endl;
      addToSack(7);
      eggCount = eggCount - 2;
    }
  }
  else if (item == 6)
  {
    if (eggCount >= 2)
    {
      cout << "A salmon has been added to your bag! " << endl;
      addToSack(7);
      eggCount = eggCount - 2;
    }
  }
  else
  {
    cout << "Item left behind." << endl;
  }
  checkKnapsack();
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
  int number = itemPtr->itemNum;
  if (isEmpty())
  {
    cout << "No values yet. " << endl;
  }
  else
  {
    do {
      if (number == 1)
      {
        troutNum++;
      }
      else if (number == 2)
      {
        woodNum++;
      }
      else if (number == 3)
      {
        sailorNum++;
      }
      else if (number == 6)
      {
        eggNum++;
      }
      else if (number == 7)
      {
        salmonNum++;
      }
      itemPtr = itemPtr->next;
      number = itemPtr->itemNum;
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
bool Board::feedEnemies()
{
  if (enemyCount == 0)
  {
    return true;
  }
  else 
  {
    return false;
  }
}
/*********************************************************************
** Function: beginLevel
** Description: beginning of each Space level - deletes old items 
** from Knapsack, then adds new ones
** Parameters: int level 
** Returns: None
*********************************************************************/
void Board::beginLevel(int level)
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
    addToSack(8);
    addToSack(3);
    addToSack(7);
  }
}
/*********************************************************************
** Function: beginPlay
** Description: calls all functions at the start of each move
** Parameters: int num 
** Returns: None
*********************************************************************/
void Board::beginPlay(int num)
{
  linkSpaces(num);
  moveUser(num);
  printBoard(num);
  boardPopulate(num);
}
/*********************************************************************
** Function: setTask
** Description: informs setTask if task was completed or not
** Parameters: int selection 
** Returns: None
*********************************************************************/
void Board::callTask(int selection)
{
  if (selection == 1)
  {
    if (levelFPassed())
    {
      user->setTask(3);
      deleteItem(8);
    }
    else if (levelMPassed())
    {
      user->setTask(1);
      deleteItem(4);
    }
    else
    {
      user->setTask(1);
      deleteItem(5);
    }
  }
  else
  {
    user->setTask(0);
  }
}
