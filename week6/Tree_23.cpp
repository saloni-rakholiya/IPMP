void doubleTree(node* Node) 
{ 
    node* s; 
    if (Node == NULL) return; 
    doubleTree(Node->left); 
    doubleTree(Node->right); 
    s = Node->left; 
    Node->left = newNode(Node->data); 
    Node->left->left = s; 
} 
