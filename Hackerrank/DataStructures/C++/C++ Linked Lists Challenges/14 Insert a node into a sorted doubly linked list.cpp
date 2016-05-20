/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
   Node *temp = new Node;
   temp->data = data;
   temp->next = NULL;
   temp->prev = NULL;
   
   if(!head) return temp;
   
   if(head->data >= data){
       temp->next = head;
       head->prev = temp;
       return temp;
   }
   
   Node *traverse = head;
   
    
   while(traverse->next && (traverse->next->data < data)){
        traverse = traverse->next;
   }
   temp->next = traverse->next;
   temp->prev = traverse;
   
   if(traverse->next)
        traverse->next->prev = temp;
   traverse->next = temp;
   
   return head;
}

