

// function should insert the data to the front of the list
struct Node* insert(struct Node *head, int data)
{
	Node* x=new Node(data);
	x->npx=head;
	if(head!=NULL){
	    head->npx=XOR(x,(head->npx));
	}
	head=x;
}

vector<int> printList (struct Node *head)
{
	Node *curr = head;
    Node *prev = NULL;
    Node *next;
    vector<int> v;
    while (curr != NULL)
    {
        v.push_back(curr->data);
        next = XOR (prev, curr->npx);
        prev = curr;
        curr = next;
    }
    return v;
}

