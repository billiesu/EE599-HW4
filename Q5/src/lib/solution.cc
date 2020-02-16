#include "solution.h"

void Solution::Sort(vector<int> &input) { 
  std::function<bool(const int &i, const int &j)> comp = 
  [](const int &i, const int &j) -> bool{
    return i < j;
  };

  priority_queue<int, vector<int>, cmp > pq;
  for(auto it: input){
    pq.push(it);
  }
  for (int i = 0; i < input.size(); i++)
  {
    input[i] = pq.top();
    pq.pop();
  }
}

void Solution::PrintVector(vector<int> input){
  int size = input.size();
  cout << '{';
  for(int i = 0; i < size; i++){
    cout << input[i];
    if(i < size - 1){
      cout << ',';
    }
  }
  cout << '}' << endl;
}

// bool Solution::smaler(int i, int j){
//   return i < j;
// }

