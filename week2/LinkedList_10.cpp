// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
    Node* a=head1; Node* b=head2;
    Node* ans=NULL;
    Node* mid=ans;
    Node* pop;
    while(a&&b)
    {
        if(!a) b=b->next;
        else if(!b) a=a->next;
        else if(a->data==b->data){
            if(!ans){ans=a;mid=a;}
            else{
                mid->next=a;
                mid=mid->next;
            }
            a=a->next;
            b=b->next;
        }
        else if(a->data>b->data){
            b=b->next;
        }
        else {
            a=a->next;
        }
    }
    
    return ans;
    // Your Code Here
}
