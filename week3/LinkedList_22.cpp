class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*p=l1; ListNode* q=l2; ListNode* x=new ListNode(); x->val=0;x->next=NULL;
        ListNode* curr=x;
        int c=0;
        while(p!=NULL||q!=NULL)
        {
            int m;
            if(p!=NULL&&q!=NULL)m=c+q->val+p->val;
            if(p==NULL)m=c+q->val;
            if(q==NULL)m=c+p->val;
            if(m>=10){m=m%10;c=1;} else c=0;
            
            ListNode* newnode=new ListNode();
            newnode->val=m;newnode->next=NULL;
            curr->next=newnode;
            curr=newnode;
           if(q!=NULL) q=q->next; 
           if(p!=NULL) p=p->next;
        }
        if(c==1)
        {
            ListNode* newnod=new ListNode();
            newnod->val=1;newnod->next=NULL;
            curr->next=newnod;
        }
        return x->next;
        
     }
};
