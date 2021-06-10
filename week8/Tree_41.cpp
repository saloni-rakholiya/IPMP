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
    TreeNode* first=NULL;TreeNode* second=NULL;
    TreeNode* last=new TreeNode(INT_MIN);
public:
    
    void help(TreeNode* root)
    {
        if(!root) return;
        help(root->left);
        if(first==NULL&& last->val>root->val) first=last;
        if(first && last->val>root->val) second=root;
        last=root;
        help(root->right);
    }
    void recoverTree(TreeNode* root) {
        help(root);
        int x=first->val;first->val=second->val;second->val=x;
    }
};
