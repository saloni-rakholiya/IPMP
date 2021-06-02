// Should return true if tree is Sum Tree, else false
class Solution
{
    public:

   bool func(Node* root, int* a)
   {
       int s1=0,s2=0;
       if(root==NULL) return true;
       bool a1=func(root->right,&s1);
       bool a2=func(root->left,&s2);
       *a=root->data+s1+s2;
       if(!root->right && !root->left ) return true;
       
       if(!a1||!a2) return false;
       if(root->data==s1+s2) return true;
       return false;
   }
    bool isSumTree(Node* root)
    {
        int a = 0;
     return func(root, &a);
    }
};
