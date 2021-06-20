class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> a(n+1,vector<int>(W+1,0));
       
       for(int i=1;i<=n;++i)
       for(int j=1;j<=W;++j)
       {
           if(wt[i-1]>j)
           {
               a[i][j]=a[i-1][j];
           }
           else {
               a[i][j]=max(a[i-1][j],val[i-1]+a[i-1][j-wt[i-1]]);
           }
       }
       return a[n][W];
    }
};
