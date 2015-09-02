/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/


int distance(Node *d){
    int acc = 0;
    while(d){
        acc++;
        d = d->next;
    }
    return acc;
}

int FindMergeNode(Node *A,Node *B)
{
    // Complete this function
    // Do not write the main method. 
    int lenA = distance(A);
    int lenB = distance(B);
    if (lenA < lenB){
        Node *temp = A;
        A = B;
        B = temp;
    }
    int diff = abs(lenA - lenB); 

    
    while(diff--)
        A = A->next;
    
    while(A != B){
        A = A->next;
        B = B->next;
    }
    return A->data;
}
