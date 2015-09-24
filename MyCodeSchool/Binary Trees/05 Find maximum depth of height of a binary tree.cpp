/*
  Find height of a binary tree
  Node is defined as 
  struct Node
  {
     int data;
     struct Node* left;
     struct Node* right;
  }
*/
int FindBinaryTreeHeight(Node* root) {
	// Complete this function only
     // Do not write main method. 
     if(root == NULL) return -1;
     return max(FindBinaryTreeHeight(root->left),FindBinaryTreeHeight(root->right)) + 1;
}#include <stdio.h>

int main(int argc, char** argv){


    return 0;
}
