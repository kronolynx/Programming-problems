/*
  Print elements in a binary tree in it's pre-order traversal.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
void Preorder(Node* root)
{
  // Complete this function only
  // Do not write main method
  if(!root) return;

  cout << root->data << endl;

  Preorder(root->left);
  Preorder(root->right);
}
