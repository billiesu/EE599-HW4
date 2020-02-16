#include "solution.h"

  vector<int> Solution::Filter(vector<int> input){
    vector<int> res(input.size());
    auto it = std::copy_if(input.begin(), input.end(), res.begin(), [](int i){return i % 2 == 0;});
    res.resize(std::distance(res.begin(), it));
    return res;
  }

  vector<int> Solution::Map(vector<int> input){
    vector<int> res(input.size());
    std::transform(input.begin(), input.end(), res.begin(), [](int i){return i * i;});
    return res;
  }

  int Solution::Reduce(vector<int> input){
    int res = 0;
    int init = 0;
    res = std::accumulate(input.begin(), input.end(), init);
    return res;
  }


  void Solution::PrintVector(const vector<int> &input){
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