class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.second>b.second;
    }
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int> m;
        for(int i=0;i<n;++i) 
        {
            if(m.find(s[i])==m.end())
                m[s[i]]=1;
            else m[s[i]]++;
        }
        string ans="";
        vector<pair<char,int>> v;
        for(auto i=m.begin();i!=m.end();++i)
            v.push_back({(*i).first, (*i).second});
        sort(v.begin(),v.end(),cmp);
        
        for(int i=0; i <(int)v.size();++i)
        {
            for(int j=0;j<v[i].second;++j)
            ans+=v[i].first;
        }
        return ans;
    }
};
