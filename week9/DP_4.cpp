class Solution{
public:
    int maximumPath(int n, vector<vector<int>> a)
    {

        
        for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
        {
            if(j==0 && i>0){
                 a[i][0]+=max(a[i-1][0],a[i-1][1]);
            }
            else if(j==n-1&& i>0)
            {
                a[i][n-1]+=max(a[i-1][n-2],a[i-1][n-1]);
            }
            else if(i>0 && j>0)
            a[i][j]+=max(a[i-1][j],max(a[i-1][j-1],a[i-1][j+1]));
        }
        int mx=0;
        for(int i=0;i<n;++i)
        mx=max(mx,a[n-1][i]);
        
        return mx;
    }
};
