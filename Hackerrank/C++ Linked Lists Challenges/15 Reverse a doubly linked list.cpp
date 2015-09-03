/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* Reverse(Node* head)
{
   // Complete this function
   // Do not write the main method. 
   Node *temp, *current = head;
   while(current){
       temp = current->prev;
       current->prev = current->next;
       current->next = temp;
       
       head = current;
       
       current = current->prev;
   }
   return head;
}


