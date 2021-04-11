ListNode* Solution::solve(ListNode* a, int k) {
    ListNode* prev = NULL;
    ListNode* curr = a;
    ListNode* temp = NULL;
    ListNode* tail = NULL;
    ListNode* newHead = NULL;
    ListNode* join = NULL;
    int t = 0;
    while (curr) {
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
        tail->next = curr;
        t = k;
        while (curr && t--) {
            prev = curr;
            curr = curr->next;
        }
        tail = prev;
    }
    return newHead;
}
