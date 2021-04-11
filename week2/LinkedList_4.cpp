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
    bool isPalindrome(ListNode* head) {
        
        ListNode* x=new ListNode();
        stack<int> s;
        
        x=head;
        while(x!=NULL)
        {
            s.push(x->val);
            x=x->next;
        }
        x=head;
        
        while(x!=NULL)
        {
            int i=s.top();
            s.pop();
            if(i!=x->val)return false;
            x=x->next;
        }
        
        return true;
        
        
        
        
    }
};


//OR

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* st=head;
        ListNode* fast=head; ListNode*slow=head;
        if(head->next==NULL) return true;
        if(head->next->next==NULL){if(head->val==head->next->val) return true; else return false;}
        fast=head->next->next;
        while(fast && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast && fast->next==NULL) {
            slow=slow->next;
        } 
        ListNode* mid=slow->next;
        ListNode* prev=NULL; ListNode* next=NULL;
        
        while(mid!=NULL)
        {
            next=mid->next;
            mid->next=prev;
            prev=mid;
            mid=next;
        }
        slow->next=prev;
        slow=slow->next;
        while(slow!=NULL)
        {
            if(slow->val!=st->val){return false;}
            slow=slow->next;
            st=st->next;
        }
        return true;
    }
};
