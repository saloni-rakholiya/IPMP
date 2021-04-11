#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
class Node {
public:
    int data;
    Node* next;
};
 
 
void deleteList(Node** h)
{
 Node* cur=*h;
 Node* nex=NULL;
 while(cur)
 {
 	nex=cur->next;
 	free(cur);
 	cur=nex;
 }
 *h=NULL;
}
 
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
 
    /* Use push() to construct below list
    1->12->1->4->1 */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
 
    cout << "Deleting linked list";
    deleteList(&head);
    cout << "\nLinked list deleted";
} 
