
/*
structure of node is as
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/


/*
These are global variables to store heads of split lists
struct Node* a; //store head of first list
struct Node* b; //store head of second list

*/

void alternatingSplitList(struct Node* head) 
{
    Node* f=NULL; Node* s=NULL;
    Node* x=head; Node* t= head;
    int c=0;
    while(x)
    {
        ++c;
        t=x->next;
        x->next=NULL;
        if(c%2==1)
        {
            if(a==NULL){
                a=x; f=x;
            }
            else{
                f->next=x; f=f->next;
            }
        }
        else {
            if(b==NULL){
                b=x; s=x;
            }
            else{
                s->next=x;s=s->next;
            }
        }
        x=t;
    }
}


