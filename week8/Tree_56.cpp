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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int r=0;
        return b(preorder,inorder,r,0,inorder.size()-1);
    }
    
    TreeNode* b(vector<int>& preorder, vector<int>& inorder, int& r,int a,int m)
    {
        if(a>m) return NULL;
        int p=a;
        while(inorder[p]!=preorder[r])++p;
        ++r;
        TreeNode* x=new TreeNode(inorder[p]);
        x->left=b(preorder,inorder,r,a,p-1);
        x->right=b(preorder,inorder,r,p+1,m);
        return x;
    }
    
};
