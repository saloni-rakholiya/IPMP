int mn(vector<int> dist, vector<int> set)
{
    int minn=INT_MAX;
    int fi;
    for(int i=0;i<dist.size();++i)
    if(set[i]==0 && dist[i]<minn)
    {
        minn=dist[i]; fi=i;
    }
    retun fi;
}

void dij(int graph[V][V], int src){
	vector<int> dist(n,INT_MAX);
    dist[s]=0;
    vector<int> set(n,0);
    for(int k=0;k<n-1;++k)
    {
        int u=mn(dist,set);
        for(int i=0;i<n;++i)
        {
            if(set[i]==0 && graph[u][i] && dist[u]!=INT_MAX && dist[u]>dist[v]+graph[u][i])
            dist[u]=dist[v]+graph[u][i];
        }
    }
}
