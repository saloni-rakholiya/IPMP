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
    bool iss(TreeNode* root, int *h)
    {
        if(root==NULL) {h=0; return true;}
        int l=0; int r=0; 
        bool a=iss(root->left,&l);
        bool b=iss(root->right,&r);
        *h=max(l,r)+1;
        if(abs(l-r)>=2) return false;
        return a&&b;
    }
    bool isBalanced(TreeNode* root) {
        int h=0;
        return iss(root,&h);
    }
};
