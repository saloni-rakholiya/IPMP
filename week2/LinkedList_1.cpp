//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    Node* st=head;
    if(head==NULL) return -1;
    for(int i=1;i<=n-1;++i) {st=st->next; if(st==NULL) return -1;}
    
    Node* f=head;
    
    while(st->next!=NULL)
    {
        st=st->next; 
        f=f->next;
    }
    
    return f->data;
       // Your code here
}

//leet
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* s=head;
        ListNode* x1=head;
        ListNode* x2=head;
        if(s==NULL) return NULL;
        for(int i=1;i<=n;++i) {
            s=s->next;if(s==NULL) return head->next;
        }
        while(s->next!=NULL){
            s=s->next; x1=x1->next;
        }
        x1->next=x1->next->next;
        return head;
    }
};
