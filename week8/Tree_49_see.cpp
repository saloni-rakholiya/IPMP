void printAncestors(struct Node *root, int key)
{
    if (root == NULL) return;
    stack<struct Node* > st;
    while (1)
    {
        while (root && root->data != key)
        {
            st.push(root);  
            root = root->left;  
        }
        if (root && root->data == key)
            break;
        if (st.top()->right == NULL)
        {
            root = st.top();
            st.pop();
            while (!st.empty() && st.top()->right == root)
               {root = st.top();
               st.pop();
               }
        }
        root = st.empty()? NULL: st.top()->right;
    }
    while (!st.empty())
    {
        cout<<st.top()->data<<" ";
        st.pop();
    }
}
