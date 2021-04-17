class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL||head->next==NULL) return head;
        Node* x=NULL;
       Node * prev=head;
       head=head->next;
       Node* curr=head;
       while(true)
       {
           x=curr->next;
           curr->next=prev;
           if(x==NULL||x->next==NULL) {
               prev->next=x;
               break;
           }
           prev->next=x->next;
           prev=x;
           curr=x->next;
       }
       return head;
    }
};
