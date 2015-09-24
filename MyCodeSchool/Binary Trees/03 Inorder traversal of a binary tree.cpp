/*
  Print elements in a binary tree in it's in-order traversal.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
void Inorder(Node* root)
{
  // Complete this function only
  // Do not write main method
  if(!root) return;
  
  Inorder(root->left);
  cout << root->data << endl;
  Inorder(root->right);
}
