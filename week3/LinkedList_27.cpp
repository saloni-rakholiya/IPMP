
/*
structure of the node of the linked list is
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// complete this function
void mergeList(struct Node **p, struct Node **q)
{
    Node*a=*p;Node*b=*q;
    Node*x=NULL;Node*y=NULL;
     while(a!=NULL&&b!=NULL)
     {
         x=a->next;y=b->next;
         
         b->next=x;
         a->next=b;
         
         a=x;b=y;
     }
     *q=b;
}
