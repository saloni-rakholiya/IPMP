class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int tosum(Node*node)
    {
        if(!node) return 0;
        int old=node->data;
        node->data=tosum(node->left)+tosum(node->right);
        return node->data+old;
    }
    void toSumTree(Node *node)
    {
        tosum(node);
        // Your code here
    }
};
