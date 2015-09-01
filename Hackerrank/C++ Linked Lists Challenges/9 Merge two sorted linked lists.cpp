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
    
    Node *merge, new_head;
    
    if(!headA) return headB;
    if(!headB) return headA;
    
    new_head.next = NULL;
    merge = &new_head;
    
    while(headA && headB){
        if(headA->data < headB->data){
            merge->next = headA;
            headA = headA->next;
        }else{
            merge->next = headB;
            headB = headB->next;
        }    
        merge = merge->next;
    }
    merge->next = (headA)? headA : headB;
    
    return new_head.next;   
}


