/*
  Print elements in a binary tree in it's level-order traversal.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
void level_order(Node* root)
{
  // Complete this function only
  // Do not write main method
  queue<Node*> traverse;
  traverse.push(root);
  while(!traverse.empty()){
      Node *current = traverse.front();
      cout << current->data << endl;
      if(current->left) traverse.push(current->left);
      if(current->right) traverse.push(current->right);
      traverse.pop();
      
  }
}
