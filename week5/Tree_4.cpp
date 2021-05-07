
class Solution
{
    public:
    //Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root)
    {
        if(root==NULL) return 0;
        queue<Node*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int s=q.size();
            ans=max(ans,s);
            while(s--){
                Node* t=q.front(); q.pop();
                if(t->left) q.push(t->left);
                if(t->right)q.push(t->right);
            }
        }
        return ans;
    }
};

///
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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        //similar to level order
        queue<pair<TreeNode *, unsigned long long int>> q;
        int maxwidth =0;
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            unsigned long long int left_index = q.front().second, right_index = 0;
            unsigned long long int sz = q.size();
            for(unsigned long long int i=0; i<sz; i++){
                
                pair<TreeNode *, unsigned long long int> p = q.front();
                q.pop();
                TreeNode *temp = p.first;
                right_index = p.second;
                if(temp->left)
                    q.push(make_pair(temp->left, 2*right_index + 1));
                if(temp->right)
                    q.push(make_pair(temp->right, 2*right_index + 2));
            }
            
            maxwidth = max(maxwidth, int(right_index - left_index + 1));
        }
        
        return maxwidth;
    }
};
