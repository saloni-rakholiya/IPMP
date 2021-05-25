void ku(struct Node* root, int k,vector<int>& ans){
    if(root==NULL) return;
    if(k==0) ans.push_back(root->data);
    ku(root->left,k-1,ans);
    ku(root->right,k-1,ans);
}
vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> ans;
  ku(root,k,ans);
  return ans;
}
