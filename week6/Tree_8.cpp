class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> x;
        if(root==NULL ) return x;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> curr;
        while(!q.empty())
        {   
            TreeNode* y=q.front();
            q.pop();
            if(y==NULL)
            {  if(!q.empty())
                q.push(NULL);
                if(curr.size()>0)
                x.push_back(curr);
                curr.clear();
            }
            else
          {
                curr.push_back(y->val);
            if(y->left)q.push(y->left);
            if(y->right)q.push(y->right);}
        }
        
        return x;
    }
};
