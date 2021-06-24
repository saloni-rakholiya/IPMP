class Solution
{
	public:
	void tt(vector<int> adj[],vector<vector<int>>&a,int v)
	{
	    for(int i=0;i<v;++i)
	    {
	        for(auto j=adj[i].begin(); j!=adj[i].end();++j)
	        a[*j].push_back(i);
	    }
	    
	}
	void fill(int i,vector<int>adj[] , stack<int>& s,vector<int>&v)
	{
	    v[i]=1;
	    for(auto j=adj[i].begin();j!=adj[i].end();++j)
	    if(v[*j]==0) fill(*j,adj,s,v);
	    s.push(i);
	}
	void dfs(int top,vector<vector<int>>&a, vector<int>&v)
	{
	    v[top]=1;
	    for(auto j=a[top].begin();j!=a[top].end();++j)
	    if(v[*j]==0)
	    dfs(*j,a,v);
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> s;
        vector<int> v(V,0);
        for(int i=0;i<V;++i)
        if(v[i]==0) fill(i,adj,s,v);
        vector<vector<int>> a(V);
        tt(adj,a,V);
        int count=0;
        for(int i=0;i<V;++i) v[i]=0;
        while(!s.empty())
        {
            int top=s.top();
            s.pop();
            if(v[top]==0) {
                dfs(top,a,v);
                count++;
            }
        }
        return count;
    }
};

