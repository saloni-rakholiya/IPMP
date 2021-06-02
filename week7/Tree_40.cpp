class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int iss(Node*root, int sum, unordered_map<int,int>& mp)
    {
        if(!root) return false;
        if(iss(root->left,sum,mp)) return true;
        
        if(mp.find(sum-root->data)!=mp.end())
        {
            return true;
        }
        else mp[root->data]++;
        return iss(root->right,sum,mp);
    }
    int isPairPresent(struct Node *root, int target)
    {
        unordered_map<int,int> mp;
        return iss(root,target,mp);
        return false;
    }
    
};
