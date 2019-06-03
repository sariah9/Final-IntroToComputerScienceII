#ifndef KNAPSACK_HPP
#define KNAPSACK_HPP

struct Knapsack
{
public:
  int itemNum;
  Knapsack* next;
  Knapsack();
  ~Knapsack();
};

#endif
