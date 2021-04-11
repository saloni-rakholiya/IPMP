// Complete this function
void deleteAlt(struct Node *head){
    Node* a=head;
    while(a && a->next)
    {
        Node* p=a->next;
        a->next=a->next->next;
        free(p);
        a=a->next;
    }
}
