class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,vector<pair<int,int>>> mp;
        for(int i=0;i<n;++i)
            for(int j=i+1;j<n;++j)
                mp[nums[i]+nums[j]].push_back({i,j});
        
        
        for(int i=0;i<n;++i)
            {if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;++j)
            {
                if(j>i+1&& nums[j]==nums[j-1]) continue;
                int s=target-nums[i]-nums[j];
                if(mp.count(s))
                {
                    for(auto k=mp[s].begin();k!=mp[s].end();++k)
                    {
                        int fi=(*k).first; int se=(*k).second;
                        if(fi>j){
                            if(!ans.empty()&& ans.back()[0]==nums[i] && ans.back()[1]==nums[j] &&ans.back()[2]==nums[fi] && ans.back()[3]==nums[se]) continue;
                            ans.push_back({nums[i],nums[j],nums[fi],nums[se]});
                        }

                    }
                }
            }}
        return ans;
    }
};
