Node* merge(Node*a,Node*b)
{
    if(a==NULL) return b;
    if(b==NULL) return a;
    if(a->data<b->data)
    {
        a->bottom=merge(a->bottom,b);
        return a;
    }
    else b->bottom=merge(a,b->bottom);
    return b;
    
}
Node *flatten(Node *root)
{
    if(root==NULL||root->next==NULL) return root;
    
    return merge(root,flatten(root->next));
   // Your code here
}

