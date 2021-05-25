void deleteTree(node* node) 
{ 
    if (node == NULL) return; 
    deleteTree(node->left); 
    deleteTree(node->right); 
    delete node;
} 
