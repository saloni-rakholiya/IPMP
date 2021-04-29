class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> ans(101,vector<double>(101,0));
        ans[0][0]=poured;
        for(int i=0;i<=query_row;++i)
            for(int j=0;j<=i;++j){
                if(ans[i][j]>1)
                {
                    ans[i+1][j]+=max(0.0,(ans[i][j]-1)/2);
                    ans[i+1][j+1]+=max(0.0,(ans[i][j]-1)/2);
                    ans[i][j]=1;
                }
            }
        return ans[query_row][query_glass];
    }
};

//sec
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> ans(101,0);
        ans[0]=poured;
        for(int i=1;i<=query_row;++i)
            for(int j=i;j>=0;--j)
                {
                    ans[j]=max(0.0,(ans[j]-1)/2);  
                    ans[j+1]+=ans[j];
                    
                }
            
        return min(1.0,ans[query_glass]);
    }
};
