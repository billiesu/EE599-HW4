#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(GetParentIndexShould, InValidInput1) {
  MaxHeap heap;
  int actual = heap.GetParentIndex(0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(GetParentIndexShould, InValidInput2) {
  MaxHeap heap;
  int actual = heap.GetParentIndex(3);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(GetParentIndexShould, ValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetParentIndex(3);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(GetLeftIndexShould, ValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetLeftIndex(1);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(GetLeftIndexShould, InValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetLeftIndex(5);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(GetRightIndexShould, InValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetRightIndex(5);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(GetRightIndexShould, ValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetRightIndex(1);
  int expected = 4;
  EXPECT_EQ(expected, actual);
}

TEST(GetLargestChildIndexShould, InValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetLargestChildIndex(5);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(GetLargestChildIndexShould, ValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.GetLargestChildIndex(1);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(TopShould, ValidInput) {
  MaxHeap heap;
  heap.push(5);
  heap.push(7);
  heap.push(9);
  heap.push(4);
  heap.push(2);
  heap.push(11);
  int actual = heap.top();
  int expected = 11;
  EXPECT_EQ(expected, actual);
}

TEST(TopShould, InValidInput) {
  MaxHeap heap;
  int actual = heap.top();
  int expected = INT_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(PushShould, ValidInput) {
  MaxHeap h;
  h.push(1);
  h.push(3);
  h.push(5);
  h.push(7);
  h.push(9);
  h.push(4);
  h.push(2);
  h.push(11);
  vector<int> actual = h.PrintData_();
  vector<int> expected = {11,9,4,7,5,3,2,1};
  EXPECT_EQ(expected, actual);
}

TEST(PopShould, ValidExcute) {
  MaxHeap h;
  h.push(1);
  h.push(3);
  h.push(5);
  h.push(7);
  h.push(9);
  h.push(4);
  h.push(2);
  h.push(11);
  h.pop();
  vector<int> actual = h.PrintData_();
  vector<int> expected = {9,7,4,1,5,3,2};
  EXPECT_EQ(expected, actual);
}

TEST(PopShould, UnValidExcute) {
  MaxHeap h;
  h.pop();
  vector<int> actual = h.PrintData_();
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}




