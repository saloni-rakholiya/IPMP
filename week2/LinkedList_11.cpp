//INTERSECTION
class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node*ans=NULL;
        Node*mid=NULL;
        unordered_map<int,int>  m;
        Node* b=head1;Node*a=head2;
        while(a)
        {
            m[a->data]++;
            a=a->next;
        }
        Node *pop=NULL;
        while(b){
            if(m.find(b->data)!=m.end() && m[b->data]>0)
            {
                if(!ans){
                    ans=b;
                    mid=b;
                }
                else{
                    mid->next=b;
                    mid=mid->next;
                }
                m[b->data]--;
                
            }
            b=b->next;
        }
        mid->next=NULL;
        return ans;
    }
};
//UNION
