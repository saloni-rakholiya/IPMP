class Solution
{
    public:
    Node* isloop(Node* h)
    {
        Node* slow=h;Node* fast=h;
        if(h==NULL||!h->next)return NULL;
        fast=h->next->next; slow=h->next;
        while(fast&& fast->next)
        {
            slow=slow->next;fast=fast->next->next;
            if(slow==fast) break;
        }
        if(!fast || !fast->next) return NULL;
        return fast;
    }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node* p=isloop(head);
        if(p==NULL) return;
        Node* f=head;
        if(p==head)
        {
            Node* i=head;
            while(i&& i->next!=head)
            {
                i=i->next;
            }
            i->next=NULL;
            return;
        }
        while(f&&p)
        {
            p=p->next;f=f->next;
            if(p==f) break;
        }
        while(p&&p->next!=f)
        {
            p=p->next;
        }
        p->next=NULL;
        return;
        // code here
        // just remove the loop without losing any nodes
    }
};
