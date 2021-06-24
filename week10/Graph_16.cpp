void topo(vector<vector<int>> adj,stack<int> &s,int i,vector<int>& v)
{
	v[i]=1;
	for(auto j=adj[i].begin();j!=adj[i].end();++j)
	if(v[*j]==0) 
	topo(adj,s,*j,v);
	
	s.push(i);
}
void shortest(int V,vector<vector<int>> adj,int src)
{
	stack<int> s;
	vector<int> v(V,0);
	for(int i=0;i<V;++i)
	if(v[i]==0) topo(adj,s,i,v);
	vector<int>d(V,INT_MAX);
	d[src]=0;
	while(!s.empty())
	{
		int top=s.top(); s.pop();
		if(d[top]!=INT_MAX)
		{
			for(auto i=adj[top].begin();i!=adj[top].end();++i)
			{
				if(d[*i]>d[top]+weight[*i][top]) d[*i]=d[top]+weight[*i][top];
			}
		}
	}
}
