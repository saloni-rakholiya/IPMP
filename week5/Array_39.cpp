class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> ans;
        int m=nums.size();
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty()){
            pair<int,int> p=q.front();q.pop();
            ans.push_back(nums[p.first][p.second]);
            
            if(p.second==0 && p.first<m-1)
            {
                q.push({p.first+1,p.second});
            }
            
            if(p.second<nums[p.first].size()-1)
            {
                q.push({p.first,p.second+1});
            }
        }
        return ans;
    }
};
