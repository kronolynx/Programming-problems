/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* temp = head, *to_delete;
    while(temp->next){
        if(temp->data == temp->next->data){
            to_delete = temp->next;
            temp->next = to_delete->next;
            delete(to_delete);
        }else{
            temp = temp->next;
        }
    }
    return head;
}

