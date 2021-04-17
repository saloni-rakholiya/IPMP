class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
       if(n==0) return 1;
        int o=0;
        for(int i=0;i<n;++i)if(nums[i]==1) o=1;
        if(o==0) return 1;
        for(int i=0;i<n;++i)
            if(nums[i]<1 || nums[i]>n) nums[i]=1;
        for(int i=0;i<n;++i)
            nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        for(int i=0;i<n;++i) if (nums[i]>0) return i+1;
        return n+1;
    }
};
