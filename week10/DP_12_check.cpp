class Solution{
    public:
    /*The function takes an array of heights, width and 
    length as its 3 arguments where each index i value 
    determines the height, width, length of the ith box. 
    Here n is the total h of boxes.*/
    int maxHeight(int h[],int w[],int l[],int n)
    {
        vector<int> dp(1001,0);
        vector<pair<pair<int,int>,int>> v;
        for(int i=0;i<n;++i)
        {
            int a=h[i];
            int b=w[i];
            int c=l[i];
            v.push_back({{a,b},c});
            v.push_back({{b,a},c});
            v.push_back({{b,c},a});
            v.push_back({{c,b},a});
            v.push_back({{a,c},b});
            v.push_back({{c,a},b});
            
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();++i)
        {
            dp[i]=v[i].second;
            for(int j=0;j<i;++j)
            {
                if(v[j].first.first<v[i].first.first && v[j].first.second<v[i].first.second)
                dp[i]=max(dp[i],dp[j]+v[i].second);
            }
        }
        int mx=INT_MIN;
        for(int i=0;i<v.size();++i)
        mx=max(mx,dp[i]);
        
        return mx;
    }
};
