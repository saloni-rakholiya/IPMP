class Solution {
public:
bool issa(vector<vector<int>>&a, int i,vector<int>&seen,vector<int>& mt)
{
    for(int j=0;j<(int)a[0].size();++j)
    {
        if(a[i][j] && seen[j]==0)
        {
            seen[j]=1;
            if(mt[j]<0 || issa(a,mt[j],seen,mt))
            {
                mt[j]=i; return true;
            }
        }
    }
    return false;
}
	int maximumMatch(vector<vector<int>>&a){
	    int m=a.size(); int n=a[0].size();
	    vector<int> mt(n,-1);
	    int ans=0;
	    for(int i=0;i<m;++i)
	    {
	        vector<int>seen(n,0);
	        if(issa(a,i,seen,mt))
	        ans++;
	    }
	    return ans;
	}

};
