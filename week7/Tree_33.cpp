//Function to check whether a binary tree is foldable or not.
bool iss(Node* a,Node*b)
{
    if(!a && !b) return true;
    if(!a||!b) return false;
    if(iss(a->left,b->left) && iss(a->right,b->right));
}
void mirror(Node* root){
    if(!root) return;
    mirror(root->left);
    mirror(root->right);
    Node* x=root->right; root->right=root->left; root->left=x;
    
}
bool IsFoldable(Node* root)
{
    if(!root) return true;
    mirror(root->left);
    bool b=iss(root->left,root->right);
    mirror(root->left);
    return b;
}
