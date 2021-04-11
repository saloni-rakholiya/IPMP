
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> a, int k)
    {
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
    vector<int> ans;
    for(int i=0;i<k;++i)
    {
        p.push({a[i][0],{i,0}});
    }
    while(!p.empty()){
     pair<int,pair<int,int>> t=p.top();
     //cout<<t.first<<" popped\n";
     p.pop();
     ans.push_back(t.first);
    // cout<<t.second.second+1<<" "<<(int)a[t.second.first].size()<<"\n";
     if(t.second.second+1<105 && a[t.second.first][t.second.second+1]!=0)
     {p.push({a[t.second.first][t.second.second+1],{t.second.first,t.second.second+1}});
    //cout<<"inserted "<<a[t.second.first][t.second.second+1]<<"\n";
     }
     }
    return ans;
    }
};

