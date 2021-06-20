class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void topo(int n, vector<int> adj[], vector<int>& ans, vector<int>&v)
	{
	    v[n]= 1;
	    for(auto i=adj[n].begin();i!=adj[n].end();++i)
	    if(v[*i]==0) topo(*i,adj,ans,v);
	    
	    ans.push_back(n);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans, v(V,0);
	    for(int i=0;i<V;++i)
	    if(v[i]==0)
	    topo(i,adj,ans,v);
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};
