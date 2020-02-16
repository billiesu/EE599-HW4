#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <functional>

using std::vector;
using std::priority_queue;
using std::cout;
using std::endl;


struct cmp{ 
  bool operator()( const int& a , const int& b)const{ 
      return a > b ;      //小顶堆 
  }
}; 
class Solution {
public:
  void Sort(vector<int> &input);
  void PrintVector(vector<int> input);

};

#endif