// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        Node* z=new Node(-1); Node* two=new Node(-1); Node* one=new Node(-1);
        Node* zs=z; Node* os=one;Node* ts=two;
        Node* x=head;
        Node* temp;
        while(x)
        {
            // cout<<x->data;
            temp=x->next;
            x->next=NULL;
        if(x->data==0)
        {
            if(z->next==NULL)
            {z->next=x;
                zs=x;
            }
            else {
                zs->next=x;
                zs=zs->next;
            }
        }
        else if(x->data==1)
        {
            if(one->next==NULL)
            {one->next=x; os=x;}
            else{
                os->next=x;
                os=os->next;
            }
        }
        else if(x->data==2) {
            if(two->data=NULL)
            {two->next=x; ts=x;}
            else{
                ts->next=x;
                ts=ts->next;
            }
        }
         x=temp;   
        }
        if(one->next)
        zs->next=one->next;
        else zs->next=two->next;
        os->next=two->next;
        return z->next;
    }
};
