#include "solution.h"

int Solution::KthLargest(const vector<int> &input, int k){
  if(input.size() == 0 || k > input.size() || k < 1){
    return INT16_MIN;
  }
  priority_queue<int> pq;
  for(auto it: input){
    pq.push(it);
  }
  for(int i = 1; i < k; i++){
    pq.pop();
  }
  return pq.top();  
}


