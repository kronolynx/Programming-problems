/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    
    Node* temp = head;
    if(position == 0){
        head = head->next;
        delete(temp);
    }else{
        for(int i = 0; i < position - 1; i++)
            temp = temp->next;
        
        Node* to_delete;
        to_delete = temp->next;
        temp->next = to_delete->next;
        delete(to_delete);
    }
    
    return head;
  
}

