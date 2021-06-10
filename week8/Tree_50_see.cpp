class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node* issa(Node* root)
    {
        if(!root) return root;
        if(root->left){
           Node* p=issa(root->left);
            while(p->right) p=p->right;
            p->right=root;
            root->left=p;
        }
        if(root->right){
            Node* x=issa(root->right);
            while(x->left) x=x->left;
            root->right=x;
            x->left=root;
        }
        return root;
    }
    Node * bToDLL(Node *root)
    {
        if(!root) return root;
        root=issa(root);
        while(root->left) root=root->left;
        
        return root;
    }
};
