
class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        vector<vector<int>> a(n,vector<int>(m,0));
        int mx=0;
        for(int i=0;i<n;++i)
       { mx=max(mat[i][0],mx); a[i][0]=mat[i][0];}
        for(int i=0;i<m;++i)
        {mx=max(mat[0][i],mx);a[0][i]=mat[0][i];}

        for(int i=1;i<n;++i)
        for(int j=1;j<m;++j)
        {
            if(mat[i][j]==1) a[i][j]=min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+1;
            mx=max(a[i][j],mx);
        }
        return mx;
    }
};
