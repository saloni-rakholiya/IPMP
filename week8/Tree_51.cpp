Node* sortsmthing(Node* head)
{
	int n=count(head);
	return issa(head,n);
}

int count(Node* head)
{
	int c=0;
	while(head)
	{
		++c;
		head=head->next;
	}
	return c;
}

Node* issa(Node*head, int n)
{
	if(n<=0) return NULL;
	Node* left=issa(head,n/2);
	Node*root=head;
	root->prev=left;
	head=head->next;
	root->next=issa(head,n-n/2-1);
	return root;
	
}
