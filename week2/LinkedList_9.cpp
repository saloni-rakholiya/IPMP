/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA ||!headB) return NULL;
        ListNode* f=headA;ListNode*s=headB;
        while(f!=s)
        {
            f=f->next;
            s=s->next;
            if(!f&&!s) return s;
            if(!f) f=headB;
            if(!s)s=headA;
        }
        return f;
    }
};
