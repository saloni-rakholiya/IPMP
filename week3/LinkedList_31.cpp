//Function to clone a linked list with next and random pointer.
Node *copyList(Node *head) {
    unordered_map<Node*,Node*> mp;
    Node* x=head;
    while(x)
    {
        Node* orig=new Node(x->data);
        mp[x]=orig;
        x=x->next;
    }
    Node* o=head;
    Node* curr=NULL;
    while(o)
    {
        curr=mp[o];
        curr->next=mp[o->next];
        curr->arb=mp[o->arb];
        o=o->next;
    }
    return mp[head];
}
