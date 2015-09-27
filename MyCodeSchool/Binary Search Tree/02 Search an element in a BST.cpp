/*
  Search node in a binary search tree of integers
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
Node* SearchNodeInBST(Node* root,int data)
{
  // Complete this function only
  // Do not write main method
    if(root == NULL)
        return NULL;
    if(data < root->data)
        return SearchNodeInBST(root->left, data);
    if(data > root->data)
        return SearchNodeInBST(root->right, data);
    return root;
    
    
}
