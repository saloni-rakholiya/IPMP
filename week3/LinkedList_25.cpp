//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    if (num<K)
        return head;
    if (2*K-1==num)
        return head;
    Node*one=head;
    Node*op=NULL; Node*tp=NULL;
    Node*two=head;
   for(int i=1;i<K;++i)
        {op=one;one=one->next;}
   for(int i=1;i<num-K+1;++i)    
        {tp=two;two=two->next;}

    if (op)
        op->next = two;
    if (tp)
        tp->next = one;
    Node* temp = one->next;
    one->next = two->next;
    two->next = temp;
    if (K == 1)
        head = two;
    if (K == num)
        head = one;
    return head;    
}
