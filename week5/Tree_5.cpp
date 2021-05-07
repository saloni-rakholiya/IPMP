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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ans=false;
        if(p==NULL && q==NULL) return true;
        else if(p==NULL||q==NULL) return false;
        if(p->val==q->val&&isSameTree(p->right,q->right) && isSameTree(p->left,q->left)) ans=true;
        return ans;
    }
};

//
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        else if(p==NULL||q==NULL) return false;
        queue<TreeNode*> q1,q2;
        q1.push(p);
        q2.push(q);
        
        while(!q1.empty() && !q2.empty())
        {
            TreeNode* x=q1.front();
            TreeNode* y=q2.front();
         if(x->val!=y->val) return false;
            q1.pop(); q2.pop();
            if(x->right&&y->right) {
                q1.push(x->right);
                q2.push(y->right);
            }else if(x->right||y->right) return false;
            
             if(x->left&&y->left) {
                q1.push(x->left);
                q2.push(y->left);
            }else if(x->left||y->left) return false;
            
        }
        return true;
    }
};
