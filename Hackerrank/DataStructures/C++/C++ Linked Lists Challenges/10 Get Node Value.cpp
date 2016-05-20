/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    
    int counter = 0;
    Node *traverse = head;
    while(traverse->next){
        traverse = traverse->next;
        ++counter;
    }
    traverse = head;
    counter-= positionFromTail;
    while(counter-- > 0)
        traverse = traverse->next;
    
    return traverse->data;
  
}

