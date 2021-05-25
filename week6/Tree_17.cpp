class Solution {
public:
void l(Node* root,vector<int>&ans){
    if(root==NULL) return;
    if(root->left){
        ans.push_back(root->data);
        l(root->left,ans);
    }
    else if(root->right){
        ans.push_back(root->data);
        l(root->right,ans);
    }
}
void r(Node* root,vector<int>&ans){
    if(root==NULL) return;
    if(root->right){
        r(root->right,ans);
        ans.push_back(root->data);}
        else if(root->left){
        r(root->left,ans);
        ans.push_back(root->data);
    }
}

void lef(Node* root,vector<int>&ans){
    if(root==NULL) return;
    lef(root->left,ans);
    if(!root->left &&!root->right){
        ans.push_back(root->data);
    }
    lef(root->right,ans);
    
}
    vector <int> printBoundary(Node *root)
    {
        vector<int> ans;
       if(root==NULL) return ans;
       ans.push_back(root->data);
       l(root->left,ans);
       lef(root->left,ans);
       lef(root->right,ans);
       r(root->right,ans);
       return ans;
    }
};
