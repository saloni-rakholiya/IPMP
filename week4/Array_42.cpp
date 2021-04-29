class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mx=1,mn=1; int maxx=INT_MIN;
        
        for(int i=0;i<n;++i)
        {
            if(nums[i]<0) swap(mx,mn);
            mx=max(nums[i],mx*nums[i]);
            mn=min(nums[i],nums[i]*mn);
            if(mx>maxx)maxx=mx;
        }
        return maxx;
    }
};
