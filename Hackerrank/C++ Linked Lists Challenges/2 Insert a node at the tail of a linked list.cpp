/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* tail = new Node();
    tail->data = data;
    tail->next = NULL;
    
    if(head == NULL)
        return tail;
    
    Node* traverse = head;
   
    while(traverse->next != NULL)
        traverse = traverse->next;
    
    traverse->next = tail;
    
    return head;
    
}

