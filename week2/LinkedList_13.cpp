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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* a=head;
        ListNode* b=head;
        if(!a || !a->next) return a;
        int l=0;
        ListNode* len=head;
        while(len){l++;len=len->next;}
        if(l==k) return head;
        k=k%l;
        if(k==0) return head;
        for(int i=1;i<=k;++i)
        {
            b=b->next;
        }
        while(b->next)
        {
            a=a->next;b=b->next;
        }
        ListNode* x=a->next;
        b->next=head;
        a->next=NULL;
        return x;
        
    }
};

///
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* a=head;
        ListNode* b=head;
        if(k==0) return head;
        if(!a || !a->next) return a;
        int l=1;
        while(a->next){a=a->next;l++;}
        if(k%l==0) return head;
        a->next=head;
        for(int i=1;i<=l-(k%l);++i)
        {
            a=a->next;
            b=b->next;
            cout<<a->val;
        }
        a->next=NULL;
        return b;
    }
};
