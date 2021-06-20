class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int> v(V,0);
	    queue<int> q; 
	    vector<int> ans;
	    q.push(0); v[0]=1;
	    while(!q.empty())
	    {
	        int t=q.front();q.pop();
	        ans.push_back(t);
	        v[t]=1;
	        for(auto i=adj[t].begin();i!=adj[t].end();++i)
	        if(v[*i]==0)
	        {v[*i]=1; q.push(*i);}
	    }
	    return ans;
	}
};
