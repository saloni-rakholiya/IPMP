//pre
class Solution {
public:
    void pre(TreeNode* root, vector<int>&v)
    {
        if(root==NULL) return ;
        v.push_back(root->val);
        pre(root->left,v);
        pre(root->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        pre(root,v);
        return v;
    }
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        stack<TreeNode*>s;
        while(root||!s.empty()){
            if(root){
                v.push_back(root->val);
                if(root->right) s.push(root->right);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
            }
        }
        return v;
    }
};
//post
class Solution {
public:
    void pre(TreeNode* root, vector<int>&v)
    {
        if(root==NULL) return ;
        pre(root->left,v);
        pre(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        pre(root,v);
        return v;
    }
};

//inorder
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        ino(root,v);
        return v;
    }
    void ino(TreeNode* root,vector<int>& v)
    {
        if(root==NULL) return;
        ino(root->left,v);
        v.push_back(root->val);
        ino(root->right,v);
    }
};


{vector<int> nodes;
        stack<TreeNode*> todo;
        while (root || !todo.empty()) {
            while (root) {
                todo.push(root);
                root = root -> left;
            }
            root = todo.top();
            todo.pop();
            nodes.push_back(root -> val);
            root = root -> right;
        }
        return nodes;
}
