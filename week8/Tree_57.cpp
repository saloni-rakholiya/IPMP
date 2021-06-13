Node* buildd(vector<int> in, int a, int b)
{
	if(a>b) return NULL;
	int i=mx(in,a,b);
	Node* root=new Node(in[i]);
	if(a==b) return root;
	root->left=buildd(in,a,i-1);
	root->right=buildd(in,i+1,b);
	return root;
}

int mx(vector<int> in, int a, int b)
{
	int maxx=INT_MIN;
	for(int i=a;i<=b;++i)
	maxx=max(maxx,in[i]);
	return maxx;
}
