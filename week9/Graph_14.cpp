class Solution 
{
    public:
    bool iss(int n,vector<int>adj[],vector<int>& v, int parent )
    {
        v[n]=1;
        for(auto i:adj[n])
        {
            if(i==parent) continue;
            if(v[i]==1){ return true;}
            if(iss(i,adj,v,n)){ return true;}
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int> v(V,0);
	    for(int i=0;i<V;++i)
	    if(v[i]==0) if(iss(i,adj,v,-1))return true;}
	    return false;
	}
};
