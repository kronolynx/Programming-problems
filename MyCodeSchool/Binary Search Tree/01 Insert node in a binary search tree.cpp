/*
  Insert node in a binary search tree of integers
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
Node* InsertNodeInBST(Node* root,int data)
{
  // Complete this function only
  // Do not write main method
  if(root == NULL){
      root = new Node;
      root->data = data;
      root->left = root->right = NULL;
  }
  else if(data <= root->data){
      root->left = InsertNodeInBST(root->left, data);
  } else { 
      root->right = InsertNodeInBST(root->right, data);
  }
  return root;
}
