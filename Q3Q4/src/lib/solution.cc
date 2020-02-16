#include "solution.h"

BST::BST()
{
  root_ = nullptr;
}

BST::BST(const vector<int> &initial_values)
{
  if (initial_values.size() == 0)
  {
    return;
  }
  for (auto it : initial_values)
  {
    BST::push(it);
  }
  // cout << root_ -> val << endl;
}

BST::~BST(){
  while(root_ != nullptr){
    // cout << root_ -> val << "," << endl;
    erase(root_ -> val);
  }
}

void BST::push(int key){
  push_helper(&root_, key);
  
}

void BST::push_helper(TreeNode **root, int key)
{
  if(*root == nullptr){
    *root = new TreeNode(key);    //改值
    return;
  }
  TreeNode *t = *root;
  if(key < t -> val){
    push_helper(&(t -> left), key);
  }else{
    push_helper(&(t -> right), key);
  }
}


bool BST::find(int key){
  if(root_ == nullptr){
    return false;
  }
  int res = 0;
  BST::find_helper(root_, key, res);
  if(res == 0){
    return false;
  }else{
    return true;
  }
}


void BST::find_helper(TreeNode *root, int key, int &res){
  if(root == nullptr){
    return;
  }

  if(root -> val == key){
    res = 1;
  }else if(root -> val > key){
    find_helper(root -> left, key, res);
  }else if(root -> val < key){
    find_helper(root -> right, key, res);
  } 
}

bool BST::erase(int key){
  int res = 0; 
  find_helper(root_, key, res);
  if(!res){
    return false;
  }
  root_ = erase_helper(root_, key);
  return true;
}



TreeNode* BST::erase_helper(TreeNode* root, int key){
  if(root == nullptr){
    // cout << "empty root" << endl;
    return root;
  }
  else if(root -> val > key){
    // cout << "root left value: " << root -> left -> val << endl;
    root -> left = erase_helper(root -> left, key);
  }
  else if(root -> val < key){
    // cout << "root right value: " << root -> right -> val << endl;
    root -> right = erase_helper(root -> right, key);
  }
  else if(root -> val == key){  /* find this root */
    /*leaf node */
    // cout << "find this root" << endl;
    if(root -> left == nullptr && root -> right == nullptr){
      delete root;
      root = nullptr;
    }else if(root -> left == nullptr){  /* non-leaf node, only have right-son*/
      TreeNode* temp = root;
      root = temp -> right;
      delete temp;
      temp = nullptr;
    }else if(root -> right == nullptr){  /* non-leaf node, only have left-son*/
      TreeNode* temp = root;
      root = temp -> left;
      delete temp;
      temp = nullptr;      
    }else{                              /* non-leaf node, have two son*/
      TreeNode *temp = findMinNode(root -> right);
      root -> val = temp -> val;
      root -> right = erase_helper(root -> right, temp -> val);
    }
  }
  return root;
}

TreeNode* BST::findMinNode(TreeNode *root){
  while(root -> left != nullptr){
    root = root -> left;
  }
  return root;
}


vector<int> BST::PreOrderTraverse(){
  vector<int> result; 
  PreOrderTraverse_helper(root_, result);
  return result;
}

void BST::PreOrderTraverse_helper(TreeNode *root, vector<int> &res){
  if (root == nullptr){
    return;
  }
  res.push_back(root -> val);
  BST::PreOrderTraverse_helper(root -> left, res);
  BST::PreOrderTraverse_helper(root -> right, res);
}

void BST::PrintVector(const vector<int> &input)
{ 
  int size = input.size();
  cout << '{';
  for (int i = 0; i < size; i++)
  {
    cout << input[i];
    if (i < size - 1)
    {
      cout << ',';
    }
  }
  cout << '}' << endl;
}


vector<int> BST::levelTraversal(){
  return levelTraversal_helper(root_);
}



vector<int> BST::levelTraversal_helper(TreeNode *root){
  vector<int> res;
  queue<TreeNode*> mynodes;
  if(root == nullptr){
    return res;
  }
  mynodes.push(root);
  res.push_back(root -> val);
  while(!mynodes.empty()){
    if(mynodes.front() -> left != nullptr){
      TreeNode* left = mynodes.front() -> left;
      mynodes.push(left);
      res.push_back(left -> val);
    }
    if(mynodes.front() -> right != nullptr){
      TreeNode* right = mynodes.front() -> right;
      mynodes.push(right);
      res.push_back(right -> val);
    } 
    mynodes.pop();
  }
  return res;
  
}