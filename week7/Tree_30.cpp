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
    bool isValidBST(TreeNode* root) {
        return iss(root,NULL,NULL);
    }
    bool iss(TreeNode*root,TreeNode*a,TreeNode*b)
    {
        if(root==NULL) return true;
        if(a&&root->val<=a->val || b&&root->val>=b->val) return false;
        return iss(root->left,a,root)&&iss(root->right,root,b);
    }
};
