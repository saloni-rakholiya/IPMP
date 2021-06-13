class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void issa(Node* head, vector<int>&v)
    {
        if(!head) {v.push_back(-1);return;}
        v.push_back(head->data);
        issa(head->left,v);
        issa(head->right,v);
    }
    vector<int> serialize(Node *root) 
    {
        vector<int> v;
        issa(root,v);
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node* oo(int& i,vector<int> a)
    {
        if(i>a.size()-1 || a[i]==-1) {++i; return NULL;}
        Node* root=new Node(a[i]);
        ++i;
        root->left=oo(i,a);
        root->right=oo(i,a);
        return root;
    }
    Node * deSerialize(vector<int> &A)
    {
        Node* h=NULL;
        int i=0;
        return oo(i,A);
    }

};
