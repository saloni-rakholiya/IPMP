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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1) return head;
        int num=0;
        ListNode *preheader = new ListNode(-1);
        preheader->next = head;
        ListNode *cur = preheader, *nex, *tmp, *pre = preheader;
        while(cur->next) 
        {cur = cur->next;num++;}
        while(num>=k) {
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++) {
                tmp= nex->next;
                nex->next = pre->next;
                pre->next = nex;
                cur->next = tmp;
                nex = tmp;
            }
            pre = cur;
            num-=k;
        }
        return preheader->next;
    }
};

//
//another type
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* temp = NULL;
    ListNode* tail = NULL;
    ListNode* newHead = NULL;
    ListNode* join = NULL;
    int t = 0;int c=0;
    while(curr) {curr=curr->next;++c;}    
        curr=head;
    while (curr) {
        c=c-k;
        if(c>=0)
        {
        t = k;
        join = curr;
        prev = NULL;
        while (curr && t--) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if (!newHead)
            newHead = prev;
        if (tail)
            tail->next = prev;
        tail = join;
    }
    else {tail->next=curr;break;}}
    return newHead;
    }
};
