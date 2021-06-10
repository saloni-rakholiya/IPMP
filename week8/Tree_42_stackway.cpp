vector<int> printNearNodes(Node *root, int low, int high)
{
    vector<int> ans;
    stack<Node*>s;
    while(!s.empty()||root)
    {
        while(root)
        {
            s.push(root); root=root->left;
        }
        root=s.top(); s.pop();
        if(root->data>=low && root->data<=high) ans.push_back(root->data);
        root=root->right;
    }
    return ans;
}
