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
    bool isCompleteTree(TreeNode* root) {
        if(!root) return true;
        queue<TreeNode*> q;
        q.push(root);
        int flag=1;
        while(!q.empty()){
            TreeNode* f=q.front(); 
            q.pop();
            cout<<f->val<<"\n";
            
            if(f->left){
                if(flag==0) return false;
                q.push(f->left);
            }
            else {cout<<"here\n";
                  flag=0;}
            
            if(f->right){
                if(flag==0) return false;
                q.push(f->right);
            }
            else flag=0;
        }
        return true;
    }
};
