Node *constructTree(int pre[], char ln[], int n)
{
	int in=0; 
	return build(pre,ln,n,in);
}

Node* build(int p[], int ln[],int n,int &i)
{
	if(i==n) return NULL;
	Node* root=new Node(p[i]);
	if(ln[i]=='L') return root;
	
	++i;
	root->left=build(p,ln,n,i);
	root->right=build(p,ln,n,i);
	return root;
	
}
