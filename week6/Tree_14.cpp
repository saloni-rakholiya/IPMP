struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    bool c(Node* root,int curr, int* l){
        if(root==NULL)return true;
        if(root->left==NULL&&root->right==NULL)
        {
            if(*l==0){
                *l=curr;
                return true;
            }
            return (*l==curr);
        }
        return c(root->left,curr+1,l)&&c(root->right,curr+1,l);
    }
    bool check(Node *root)
    {
        int l=0;
       return c(root,0,&l);
    }
};
