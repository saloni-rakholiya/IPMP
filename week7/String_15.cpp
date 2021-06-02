class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length(); int m=t.length();
        if(m>n) return "";
        unordered_map<char,int> mp;
        for(int i=0;i<m;++i)
            mp[t[i]]++;
        int count =0;
        int low=0;
        int mn=INT_MAX;
        int start=0;
        for(int i=0;i<n;++i){
            if(mp.find(s[i])!=mp.end() && mp[s[i]]>0) count++;
            mp[s[i]]--;
            if(count==m)
            {
                while(low<i && mp[s[low]]<0) mp[s[low++]]++;
                if(mn>=i-low+1)
                {start=low;mn=i-low+1;}
                mp[s[low]]++;low++;
                count--;
            }
        }
        if(mn==INT_MAX) return "";
        return s.substr(start,mn);
    }
};
