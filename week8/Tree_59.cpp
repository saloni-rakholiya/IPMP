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
    TreeNode* issa(vector<int>& pre, vector<int>& post, int& p, int a ,int b)
    {
        if(a>b || p>=pre.size()) return NULL;
        TreeNode* root=new TreeNode(pre[p]);
        ++p;
        int i=INT_MAX;
        if(a==b) return root;
        if( p>=pre.size()) return NULL;
        for(i=a;i<=b;++i)
        {
            if(pre[p]==post[i]) break;
        }
        if(i<=b)
        {
            root->left=issa(pre,post,p,a,i);
            root->right=issa(pre,post,p,i+1,b-1);
        }
        return root;
        
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n=pre.size();
        int p=0;
        return issa(pre,post,p,0,n-1);
    }
};
