/*
  Print elements in a binary tree in it's post-order traversal.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
void Postorder(Node* root)
{
    // Complete this function only
    // Do not write main method
    if(!root) return;
  
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << endl;
}
