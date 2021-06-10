Node* mergetree(Node* head1,Node*head2,int n, int m)
{
	vector<int> a;
	vector<int> b;
	inorder(head2,b);
	inorder(head1,a);
	vector<int> final(n+m);
	mergee(a,b,final);
	return totree(final,0,n+m-1);
}

void inorder(Node* head,vector<int>&a)
{
	if(!head) return;
	inorder(head->left);
	a.push_back(head->val);
	inorder(head->right);
}

void mergee(vector<int> a, vector<int> b, vector<int>& ans)
{
	int n=a.size();
	int m=b.size();
	int k=0;
	int i=0; int j=0;
	while(i<n && j<m){
		if(a[i]<b[j]) {
			ans[p++]=a[i];++i;
		}
		else {
			ans[p++]=b[j];++j;
		}
	}
	while(i<n) {
		ans[p++]=a[i++];
	}
	while(j<m){
		ans[p++]=b[j++];
	}
}

Node* totree(vector<int> ans,int a, int b)
{
	if(b<a) return NULL;
	int mid=(a+b)/2;
	Node*root=new Node(ans[mid]);
	root->left=totree(ans,a,mid-1);
	root->right=totree(ans,mid+1,b);
	return root;
}


