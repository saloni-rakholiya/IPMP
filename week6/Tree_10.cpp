/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int a=0;
        while(!q.empty())
        {
            vector<int> p;
            while(q.front()!=NULL)
            {
                TreeNode* t=q.front();
                p.push_back(t->val);
                q.pop();
                if(t->left) 
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            if(a==0)
            {ans.push_back(p);a=1;}
            else{reverse(p.begin(),p.end());ans.push_back(p); a=0;}
            if(q.size()>1)
                q.push(NULL);
            q.pop();
        }
        return ans;
    }
};
