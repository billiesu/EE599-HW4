#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SortShould, EmptyInput) {
  Solution solution;
  vector<int> input = {};
  solution.Sort(input);
  vector<int> expected = {};
  vector<int> actual = input;
  EXPECT_EQ(expected, actual);
}

TEST(SortShould, DuplicateInput) {
  Solution solution;
  vector<int> input = {5, 2, 2, 2, 7, 1};
  solution.Sort(input);
  vector<int> expected = {1, 2, 2, 2, 5, 7};
  vector<int> actual = input;
  EXPECT_EQ(expected, actual);
}

TEST(SortShould, ValidInput) {
  Solution solution;
  vector<int> input = {5, 7, 1};
  solution.Sort(input);
  vector<int> expected = {1, 5, 7};
  vector<int> actual = input;
  EXPECT_EQ(expected, actual);
}

