#include "solution.h"

  MaxHeap::MaxHeap(){
    data_ = {};
  }

  int MaxHeap::GetParentIndex(int i){
    if(i <= 0 || i >= data_.size()){
      return -1;
    }
    return (i - 1) / 2;
  }

  int MaxHeap::GetLeftIndex(int i){
    int Lindex = 2 * i + 1;
    if(i < 0 || Lindex >= data_.size()){
      return -1;
    }else{
      return Lindex;
    }
  }

  int MaxHeap::GetRightIndex(int i){
    int Rindex = 2 * i + 2;
    if(i < 0 || Rindex >= data_.size()){
      return -1;
    }else{
      return Rindex;
    }    
  }

  int MaxHeap::GetLargestChildIndex(int i){
    int LIndex = MaxHeap::GetLeftIndex(i);
    int RIndex = MaxHeap::GetRightIndex(i);
    if(LIndex == -1 && RIndex == -1){
      return -1;
    }
    int left = MaxHeap::GetLeft(i);
    int right = MaxHeap::GetRight(i);
    if(left > right){
      return LIndex;
    }else{
      return RIndex;
    }
  }

  int MaxHeap::GetLeft(int i){
    if(MaxHeap::GetLeftIndex(i) == -1){
      return INT_MIN;
    }
    int LIndex = MaxHeap::GetLeftIndex(i); 
    return data_[LIndex];
  }

  int MaxHeap::GetRight(int i){
    if(MaxHeap::GetRightIndex(i) == -1){
      return INT_MIN;
    }
    int RIndex = MaxHeap::GetRightIndex(i);
    return data_[RIndex];  
  }

  int MaxHeap::GetParent(int i){
    if(MaxHeap::GetParentIndex(i) == -1){
      return INT_MIN;
    }
    int parentIndex = MaxHeap::GetParentIndex(i);
    return data_[parentIndex];
  }

  int MaxHeap::top(){
    if(data_.size() == 0){
      return INT_MIN;
    }else{
      return data_[0];
    }
  }

  void MaxHeap::push(int v){
    data_.push_back(v);
    int location = data_.size() - 1;
    MaxHeap::TrickleUp(location);
  }

  void MaxHeap::pop(){
    int size = data_.size();
    if(size == 0){
      return;
    }
    data_[0] = data_[size - 1];   
    MaxHeap::TrickleDown(0);
    data_.pop_back();
  }
  void MaxHeap::TrickleUp(int i){
    while(i != 0 && MaxHeap::GetParent(i) < data_[i]){
      int parentIndex = MaxHeap::GetParentIndex(i);
      MaxHeap::swap(data_[i], data_[parentIndex]);
      i = parentIndex;
    }
  }

  void MaxHeap::TrickleDown(int i){
    int size = data_.size();
    while(i < size && data_[GetLargestChildIndex(i)] > data_[i]){
      int index = GetLargestChildIndex(i);
      swap(data_[index], data_[i]);
      i = index;
      }
  }

  void MaxHeap::swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
  }

vector<int> MaxHeap::PrintData_(){
  vector<int> result;
  int size = data_.size();
  std::cout << '{';
  for(int i = 0; i < size; i++){
    result.push_back(data_[i]);
    std::cout << data_[i];
    if(i < size - 1){
      std::cout << ',';
    }
  }
  std::cout << '}' << std::endl;
  return result;
}

