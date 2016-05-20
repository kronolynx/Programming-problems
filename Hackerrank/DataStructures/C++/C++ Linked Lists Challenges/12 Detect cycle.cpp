
/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
    Node *tortoise = head, *hare = head;
    
    while(hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if(hare == tortoise)
            return 1;
    }
    return 0;
}

