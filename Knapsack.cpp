#include "Knapsack.hpp"

KnapSack::Knapsack(int value)
{
  next = NULL;
  itemNum = value;
}
Knapsack::~Knapsack()
{
  next = NULL;
}
