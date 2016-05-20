/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head, Node *previous){
    if(head == NULL){ 
        return previous;
    }
    Node* temp = head;
    head = head->next;
    temp->next = previous; 
    return Reverse(head ,temp);
    
}
Node* Reverse(Node *head)
{  
    return Reverse(head, NULL);;
}

