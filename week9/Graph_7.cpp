class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int> d(n,INT_MAX);
	    d[0]=0;
	    for(int i=0;i<n-1;++i)
	    {
	        for(int j=0;j<edges.size();++j)
	        {
	            int u=edges[j][0];
	            int v=edges[j][1];
	            int w=edges[j][2];
	            if(d[u]!=INT_MAX && d[v]>d[u]+w)
	            d[v]=d[u]+w;
	        }
	    }
	    
	    for(int j=0;j<edges.size();++j)
	    {
	        int u=edges[j][0];
	            int v=edges[j][1];
	            int w=edges[j][2];
	            if(d[u]!=INT_MAX && d[v]>d[u]+w)
	            return true;
	            
	    }
	    return false;
	    
	}
};
