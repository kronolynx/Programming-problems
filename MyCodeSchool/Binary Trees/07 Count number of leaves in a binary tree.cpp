/*
 Count the number of leaves in a tree and return it.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
int countLeaves(Node* root)
{
    // Complete this function only
    // Do not write main method
    if(!root)
        return 0;
    
    if(!root->left && !root->right)
        return 1;

    
  return countLeaves(root->left) + countLeaves(root->right);
}
