struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       queue<Node*> q;
       q.push(root);
       q.push(NULL);
       int ans=0;
       int k=1;
       while(!q.empty())
       {
           while(q.front()!=NULL)
           {
               Node* x=q.front();
               q.pop();
               if(k==1)
               ans+=x->data;
               else ans-=x->data;
               
               if(x->left) q.push(x->left);
               if(x->right)q.push(x->right);
               
           }
           if(q.size()>1) q.push(NULL);
           q.pop();
           if(k==1) k=0;
           else k=1;
       }
       return ans;
    }
};
