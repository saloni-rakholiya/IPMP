class Solution
{
    public:
    bool iss(int i,vector<int>adj[],vector<bool>&v,vector<bool>&rec)
    {
        if(v[i]==false)
        {
            v[i]=true;rec[i]=true;
            for(auto j=adj[i].begin();j!=adj[i].end();++j)
            {
                if(!v[*j] && iss(*j,adj,v,rec)) return true;
                else if (rec[*j]) return true;
            }
        }
        rec[i]=false;
        return false;
    }
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<bool> v(V,false), rec(V,false);
	   	for(int i=0;i<V;++i)
	   	if(iss(i,adj,v,rec)) return true;
	   	return false;
	}
};
