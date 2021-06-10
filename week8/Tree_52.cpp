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
    TreeNode* issa(vector<int>v, int a, int b)
    {
        if(a>b) return NULL;
        if(a==b) return new TreeNode(v[a]);
        TreeNode* x=new TreeNode(0);
        int mid=0;
        if((b-a+1)%2==1)
            mid=(a+b)/2;
        else 
            mid=((a+b)/2)+1;
        x->val=v[mid];
        x->left=issa(v,a,mid-1);
        x->right=issa(v,mid+1,b);
        return x;
    }
        
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return issa(nums,0,n-1);
    }
};
