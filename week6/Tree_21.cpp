//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   queue<Node*> q;
   q.push(root);q.push(NULL);
   vector<int> ans;
   if(root==NULL) return ans;
   while(!q.empty())
   {
       int a=1;
       while(q.front()!=NULL)
       {
           Node*t=q.front();
           q.pop();
           if(a==1)
           {ans.push_back(t->data);
           a=0;}
           if(t->left)q.push(t->left);
           if(t->right)q.push(t->right);
       }
       if(q.size()>1)q.push(NULL);
       q.pop();
   }
   return ans;
}
