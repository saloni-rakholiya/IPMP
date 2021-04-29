class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n);
        vector<int>ans;
        int t=1;
        for(int i=n-1;i>=0;--i)
        {
            left[i]=t;
            t=t*nums[i];
        }
        t=1;
        for(int i=0;i<n;++i)
        {
            ans.push_back(t*left[i]);
            t=t*nums[i];
        }
        return ans;
            
        
    }
};
