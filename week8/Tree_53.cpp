Node* sortedtotree(Node*head)
{
	int n=c(head);
	return issa(head,n);
}

int c(Node* head)
{
	int ans=0;
	Node*t=head;
	while(t)
	{
		t=t->next;++ans;
	}
	return ans;
}

Node* issa(Node*head,n)
{
	if(n<=0) return NULL;
	Node* left=issa(head,n/2);
	Node* root=head;
	root->left=left;
	head=head->next;
	root->right=issa(head,n-n/2-1);
	return root;
}
