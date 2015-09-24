/*
  Compare and determine whether two binary trees
  are identical or not.
  Node in binary tree is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
int CompareBinaryTrees(Node* A,Node* B) 
{
  // Complete this function only
  // Do not write main method
  if(A == NULL || B == NULL)
    return A == B ? 1 : 0;
  if(A->data != B->data) 
    return 0;
  return min(CompareBinaryTrees(A->left, B->left), CompareBinaryTrees(A->right,B->right));
}
