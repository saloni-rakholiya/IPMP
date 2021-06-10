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
    void issa(TreeNode* root, vector<string>& v, string s)
    {
        if(!root) return;
        if(s.length()==0) s+=to_string(root->val);
        else
        s+="->"+to_string(root->val);
        if(!root->left && !root->right) v.push_back(s);
        else {
            issa(root->left,v,s);
            issa(root->right,v,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string s="";
        issa(root,v,s);
        return v;
    }
};
