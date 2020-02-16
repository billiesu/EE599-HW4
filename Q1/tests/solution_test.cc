#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FilterShould, EmptyInput) {
  Solution solution;
  vector<int> input = {};
  vector<int> actual = solution.Filter(input);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(FilterShould, UnEmptyInput) {
  Solution solution;
  vector<int> input = {1,2,3,4,5,6,7,8,9};
  vector<int> actual = solution.Filter(input);
  vector<int> expected = {2,4,6,8};
  EXPECT_EQ(expected, actual);
}


TEST(MapShould, EmptyInput) {
  Solution solution;
  vector<int> input = {};
  vector<int> actual = solution.Map(input);
  vector<int> expected = {};
  EXPECT_EQ(expected, actual);
}

TEST(MapShould, UnEmptyInput) {
  Solution solution;
  vector<int> input = {1,2,3,4,5,6,7,8,9};
  vector<int> actual = solution.Map(input);
  vector<int> expected = {1,4,9,16,25,36,49,64,81};
  EXPECT_EQ(expected, actual);
}

TEST(ReduceShould, EmptyInput) {
  Solution solution;
  vector<int> input = {};
  int actual = solution.Reduce(input);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}

TEST(ReduceShould, UnEmptyInput) {
  Solution solution;
  vector<int> input = {1,2,3,4,5,6};
  int actual = solution.Reduce(input);
  int expected = 21;
  EXPECT_EQ(expected, actual);
}