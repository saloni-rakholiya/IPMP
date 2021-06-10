class Solution{
  public:
  bool issa(Node* root, int t, vector<int>&v)
  {
      if(root==NULL) return false;
      if(root->data==t) return true;
      if(issa(root->left,t,v) || issa(root->right,t,v)) {v.push_back(root->data); return true;}
  
      return false;
  }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int> v;
        issa(root,target,v);
        return v;
    }
};
