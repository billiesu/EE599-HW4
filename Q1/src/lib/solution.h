#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
  vector<int> Filter(vector<int> input);
  vector<int> Map(vector<int> input);
  int Reduce(vector<int> input);
  void PrintVector(const vector<int> &input);
};

#endif