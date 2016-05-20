/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(!headA || !headB) return (headA)? headA : headB;
    
    Node *temp;
       
    if(headA->data <= headB->data){
        temp = headA;
        temp->next = MergeLists(headA->next, headB);
    }else{
        temp = headB;
        temp->next = MergeLists(headB->next, headA);
    }
    
    return temp;
}

