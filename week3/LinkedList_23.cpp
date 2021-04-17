/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
long long  multiplyTwoLists (Node* a, Node* b)
{
    long long int n=0; long long int m=0;
    Node* x=a; Node*y=b;
    long long p=1000000007;
    while(x)
    {
        n=((n*10)%p+x->data)%p;
        x=x->next;
    }
    while(y)
    {
        m=((m*10)%p+y->data)%p;
        y=y->next;
    }
    return (long long )((m%p)*(n%p))%p;
  //Your code here
}
