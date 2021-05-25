class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       if(root==NULL) return ;
       queue<Node*> q;
      
       q.push(root);
       q.push(NULL);
       
       while(!q.empty())
       {
           while(q.front()!=NULL)
           {
               Node*t=q.front();
               q.pop();
               if(t->left) q.push(t->left);
               if(t->right) q.push(t->right);
               t->nextRight=q.front();
           }
           q.pop();
           if(!q.empty())q.push(NULL);
       }
    }    
      
};
