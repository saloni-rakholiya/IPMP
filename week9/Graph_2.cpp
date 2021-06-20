class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void dfs(vector<int>& ans, vector<int>adj[],vector<int>& v, int x)
	{
	    v[x]=1;
	    ans.push_back(x);
	    for(int i=0;i<adj[x].size();++i)
	    if(v[adj[x][i]]==0) dfs(ans,adj,v,adj[x][i]);
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>ans;
	    vector<int> v(V,0);
	    dfs(ans,adj,v,0);
	    return ans;
	}
};
