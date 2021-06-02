//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
   Node* x=root;
   while(x->left)
   x=x->left;
   
   return x->data;
}
