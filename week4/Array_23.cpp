class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0; int r=n-1;
        int u=0; int d=m-1;
        while(l<=r && u<=d)
        {
            // cout<<l<<r<<u<<d<<"\n";
            for(int i=l; i<=r;++i)
                ans.push_back(matrix[u][i]);
            if(++u >d) break;
            for(int i=u;i<=d;++i)
                ans.push_back(matrix[i][r]);
            if(--r<l) break;
            for(int i=r;i>=l;--i) 
                ans.push_back(matrix[d][i]);
            if(u>d--) break;
            for(int i=d;i>=u;--i)
                ans.push_back(matrix[i][l]);
            if(r<l++) break;
        }
        return ans;
    }
};
