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
    ListNode* oddEvenList(ListNode* head) {
        ListNode*odd=new ListNode(INT_MAX);ListNode*even=new ListNode(INT_MAX); ListNode*o=odd;ListNode*e=even;
        ListNode* x=head;
        ListNode* t=head;
        int c=0;
        while(x)
        {
            ++c;
            t=x->next;
            x->next=NULL;
            if(c%2==1)
            {
                
                if(o->val==INT_MAX){odd->next=x;o=x;cout<<"first";}
                else{
                    o->next=x;
                    o=o->next;
                    cout<<"sec";
                }
            }
            else {
                if(e->val==INT_MAX){even->next=x;e=x;cout<<"2ff2";}
                else{
                    cout<<"3ff3";
                    e->next=x;
                    e=e->next;
                }
            }
            x=t;
        }
        o->next=even->next;
        return odd->next;
    }
};
