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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            vector<int> v;
            while(q.front()!=NULL)
            {
                TreeNode* t=q.front();
                q.pop();
                v.push_back(t->val);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(q.size()>1) q.push(NULL);
            ans.push_back(v);
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
