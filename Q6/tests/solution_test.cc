#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(KthLargestShould, EmptyInput) {
  Solution solution;
  vector<int> input = {};
  int actual = solution.KthLargest(input, 1);
  int expected = INT16_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(KthLargestShould, UnValidK1) {
  Solution solution;
  vector<int> input = {-2, 3, -1, 5, 6, 10};
  int actual = solution.KthLargest(input, 0);
  int expected = INT16_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(KthLargestShould, UnValidK2) {
  Solution solution;
  vector<int> input = {-2, 3, -1, 5, 6, 10};
  int actual = solution.KthLargest(input, 7);
  int expected = INT16_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(KthLargestShould, ValidInput) {
  Solution solution;
  vector<int> input = {-2, 3, -1, 5, 6, 10};
  int actual = solution.KthLargest(input, 3);
  int expected = 5;
  EXPECT_EQ(expected, actual);
}