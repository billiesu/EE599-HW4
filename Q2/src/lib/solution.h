#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

class MaxHeap {
public:
  MaxHeap();

  int GetParentIndex(int i);
  int GetLeftIndex(int i);
  int GetRightIndex(int i);
  int GetLargestChildIndex(int i);

  int GetLeft(int i);
  int GetRight(int i);
  int GetParent(int i);

  int top();
  void push(int v);
  void pop();
  void TrickleUp(int i);
  void TrickleDown(int i);

  void swap(int &x, int &y);
  vector<int> PrintData_();

  private:
  vector<int> data_;
  
};

#endif