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
    
    ListNode* f(ListNode* a, ListNode* b)
    {
        if(!a)return b;
        if(!b)return a;
        if(a->val<b->val)
        {
            a->next=f(a->next,b);return a;
        }
        else {
            b->next=f(a,b->next);return b;
        }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
        return f(l1,l2);   
    }
};
