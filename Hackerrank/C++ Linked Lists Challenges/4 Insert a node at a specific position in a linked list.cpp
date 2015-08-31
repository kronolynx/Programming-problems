/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
     
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
        return temp;
    
    if(position == 0){
        temp->next = head;
        head = temp;
        return head;
    }
    
    Node *iter = head;
    for(int i = 0; i < position - 1; i++){
        iter = iter->next;
    }
    
    temp->next = iter->next;
    iter->next = temp;
    
    return head;
    
}

