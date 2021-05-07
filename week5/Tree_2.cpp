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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int a=(root->left !=NULL)?maxDepth(root->left):0;
        int b=(root->right!=NULL)?maxDepth(root->right):0;
        return max(a,b)+1;
    }
};
//new
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            ++ans;
            int siz=q.size();
            while(siz-->0)
            {
                TreeNode* t=q.front();
                q.pop();
                if(t->right)q.push(t->right);
                if(t->left) q.push(t->left);
            }
        }
        return ans;
    }
};
