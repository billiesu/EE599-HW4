#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(pushShould, EmptyTree){
  BST tree;
  tree.push(10);
  tree.push(4);
  tree.push(5);
  tree.push(7);
  tree.push(12);
  tree.push(20);
  vector<int> actual = tree.PreOrderTraverse();
  vector<int> expected = {10, 4, 5, 7, 12, 20};
  EXPECT_EQ(expected, actual);
}

TEST(pushShould, UnEmptytree){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  tree.push(6);
  vector<int> actual = tree.PreOrderTraverse();
  vector<int> expected = {10,5,4,8,7,6,12,20,15,13};
  EXPECT_EQ(expected, actual);
}

TEST(findShould, Emptytree){
  BST tree;
  bool actual = tree.find(6);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(findShould, UnEmptytreeValidInput){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  bool actual = tree.find(13);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}

TEST(findShould, UnEmptytreeUnValidInput){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  bool actual = tree.find(28);
  bool expected = false;
  EXPECT_EQ(expected, actual);
}

TEST(eraseShould, Emptytree){
  BST tree;
  bool actual = tree.erase(6);
  bool expected = false;
  vector<int> expectedVec = {};
  vector<int> actualVec = tree.PreOrderTraverse();
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expectedVec, actualVec);

}

TEST(eraseShould, UnEmptytreeUnValidInput){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  bool actual = tree.erase(28);
  bool expected = false;
  vector<int> expectedVec = {10, 5, 4, 8, 7, 12, 20, 15, 13};
  vector<int> actualVec = tree.PreOrderTraverse();
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expectedVec, actualVec);
}

TEST(eraseShould, UnEmptytreeValidInput){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  bool actual = tree.erase(4);
  bool expected = true;
  vector<int> expectedVec = {10, 5, 8, 7, 12, 20, 15, 13};
  vector<int> actualVec = tree.PreOrderTraverse();
  EXPECT_EQ(expected, actual);
  EXPECT_EQ(expectedVec, actualVec);
}

TEST(leverTraverseShould, UnEmptytree){
  vector<int> init = {10, 12, 5, 4, 20, 8, 7, 15, 13};
  BST tree(init);
  vector<int> expectedVec = {10, 5, 12, 4, 8, 20, 7, 15, 13};
  vector<int> actualVec = tree.levelTraversal();
  EXPECT_EQ(expectedVec, actualVec);
}

TEST(leverTraverseShould, Emptytree){
  BST tree;
  vector<int> expectedVec = {};
  vector<int> actualVec = tree.levelTraversal();
  EXPECT_EQ(expectedVec, actualVec);
}





