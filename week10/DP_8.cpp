class Solution
{
  public:
    long long int count( int s[], int m, int n )
    {
       vector<vector<long long>> dp(m+1,vector<long long>(n+1,0));
       for(int i=0;i<=m;++i)
       dp[i][0]=1;
       for(int i=1;i<=m;++i)
       for(int j=1;j<=n;++j)
       {
           if(s[i-1]>j) dp[i][j]=dp[i-1][j];
           else dp[i][j]=(dp[i-1][j]+dp[i][j-s[i-1]]);
       }
       
    //   for(int i=0;i<=m;++i)
    //   {cout<<"\n"; 
    //   for(int j=0;j<=n;++j)
    //   cout<<dp[i][j]<<" ";}
       return dp[m][n];
    }
};
