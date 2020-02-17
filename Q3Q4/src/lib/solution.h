#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
#include <queue>
using std::vector;
using std::cout;
using std::endl;
using std::queue;

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};


class BST {
public:
  BST();
  BST(const vector<int> &initial_values);
  ~BST();
  
  void push(int key);
  bool find(int key);
  bool erase(int key);
  
  void PrintVector(const vector<int> &input);
  vector<int> PreOrderTraverse();
  vector<int> levelTraversal();
  

private:
  TreeNode *root_;
  void find_helper(TreeNode *root, int key, int &res);
  void push_helper(TreeNode **root, int key);
  TreeNode* findMinNode(TreeNode *root);
  TreeNode* erase_helper(TreeNode* root, int key);
  void PreOrderTraverse_helper(TreeNode *root, vector<int> &res);
  vector<int> levelTraversal_helper(TreeNode *root);
  
};

#endif