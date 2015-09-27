/*
  Create Mirror Image of a binary tree
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/


Node* getTreeMirror(Node* root)
{
  // Complete this function only
  // Do not write main method
  if(!root) 
    return NULL;
  
  Node *mirror = new Node;
  mirror->data = root->data;
  mirror->left = getTreeMirror(root->right);
  mirror->right = getTreeMirror(root->left);
  return mirror;
}
