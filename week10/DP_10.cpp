class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,1);
        int mx=1;
        for(int i=1;i<n;++i)
            for(int j=0;j<i;++j)
            {
                if(nums[j]<nums[i]) a[i]=max(a[j]+1,a[i]);
                mx=max(mx,a[i]);
            }
        return mx;
    }
};
