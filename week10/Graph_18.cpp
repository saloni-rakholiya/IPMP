class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int> c(V,-1);
	    for(int j=0;j<V;++j)
	    {
	        if(c[j]==-1)
	        {queue<int> q;
	        q.push(j);
	        c[j]=1;
	        while(!q.empty())
	    {
	        int top=q.front(); q.pop();
	        
	        for(auto i=adj[top].begin();i!=adj[top].end();++i)
	        {
	            if(c[*i]==-1){
	                if(c[top]==1) c[*i]=0;
	                else c[*i]=1;
	                q.push(*i);
	            }
	            else if(c[*i]==c[top]) return false;
	        }
	    }}
	    }
	    return true;
	}

};
