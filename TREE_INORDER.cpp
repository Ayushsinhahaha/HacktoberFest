#include<bits/stdc++.h>
using namespace std;
class Tree{
  int val;
  public:
  Tree(int a)
  {
    val=a;
  }
  Tree* left;
  Tree* right;
};
void inorder(Tree* root,vector<int>& data){
  if(root==NULL)
  {
    return;
  }
  inorder(root->left,data);
  data.push_back(root->val);
  inorder(root->right,data);
}

int main()
{
    Tree* root = Tree(1);
    root->left = Tree(2);
    root->right = Tree(3);
    root->left->left = Tree(4);
    root->left->right = Tree(5);
  vector<int> data;
  inorder(root,data);
  for(auto x: data)
  {
    cout<<x<<" ";
  }
}
