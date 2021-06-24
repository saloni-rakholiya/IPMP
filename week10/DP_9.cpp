class Solution{
    public:
    
    int longestCommonSubstr (string s, string p, int n, int m)
    {
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int mx=INT_MIN;
        for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        {
            if(s[i-1]==p[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            mx=max(mx,dp[i][j]);
        }
        return mx;
    }
};
