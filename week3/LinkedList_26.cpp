class Solution
{
    public:
    void linkdelete(struct Node  *head, int m, int n)
    {
          if(n==0) return;
          Node* curr=head;
          Node*t;
          int c;
          while(curr!=NULL)
          {
              for(int i=1;i<m && curr!=NULL;++i)
              curr=curr->next;
              if(curr==NULL) return;
              t=curr->next;
              for(int i=1;i<=n && t!=NULL;++i)
              {
                  Node*d=t;
                  t=t->next;
                  free(d);
              }
              curr->next=t;
              curr=t;
          }
    }
};
