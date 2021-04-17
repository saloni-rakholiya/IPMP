class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0; int l=0; int r=0;
        int n=nums.size();
        for(int i=1;i<n;++i)sum+=nums[i];
        r=sum; 
        for(int i=0;i<n;++i)
        {
            if(l==r) return i;
            if(i+1<n)
            r=r-nums[i+1];
            else r=0;
            l=l+nums[i];
        }
        return -1;
    }
};
