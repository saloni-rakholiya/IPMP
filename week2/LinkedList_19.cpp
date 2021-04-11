// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
bool isvow(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
    return false;
}
struct Node* arrange(Node *head)
{
   Node* vow=new Node('#');
   Node* con=new Node('#');
   Node* v=vow;Node*c=con;
   Node*x=head;Node*t=head;
   while(x)
   {
       t=x->next;
       x->next=NULL;
       if(isvow(x->data))
       {
           if(v->data=='#')
           {
               vow->next=x;
               v=x;
           }
           else{
               v->next=x;
               v=v->next;
           }
       }
       else {
           if(c->data=='#')
           {
               con->next=x;
               c=x;
           }
           else{
               c->next=x;
               c=c->next;
           }
       }
       x=t;
   }
   if(vow->next==NULL ) return con->next;
   if(con->next==NULL) return vow->next;
   
   v->next=con->next;
   return vow->next;
}

