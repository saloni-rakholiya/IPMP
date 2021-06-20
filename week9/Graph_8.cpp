
class Solution {
  public:
	void shortest_distance(vector<vector<int>>&a){
	    int n=a.size();
	    
	    for(int i=0;i<n;++i)
	    for(int j=0;j<n;++j)
	    if(a[i][j]==-1) a[i][j]=INT_MAX;
	    
	    for(int k=0;k<n;++k)
	    for(int i=0;i<n;++i)
	    for(int j=0;j<n;++j)
	    {
	        if(a[i][k]!=INT_MAX && a[k][j]!=INT_MAX&& a[i][j]>=a[i][k]+a[k][j])
	        a[i][j]=a[i][k]+a[k][j];
	    }
	    
	    for(int i=0;i<n;++i)
	    for(int j=0;j<n;++j)
	    if(a[i][j]==INT_MAX) a[i][j]=-1;
	}
};

