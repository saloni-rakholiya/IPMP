class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node* m(Node*root)
    {
        Node*y=root;
        while(y->left)
        {
            y=y->left;
        }
        return y;
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(x->right) return m(x->right);
        Node* ans=NULL;
        while(root)
        {
            if(x->data<root->data)
            {
                ans=root;
                root=root->left;
            }
            else if(x->data>root->data)
            {
                root=root->right;
            }
            else break;
        }
         return ans;
    }
};
