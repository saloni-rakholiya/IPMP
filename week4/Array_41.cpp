class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int s=0;
        for(int i=0;i<n;++i)
        {
            s+=nums[i];
            if(s>mx)mx=s;
            if(s<0) {s=0;}
        }
 
        return mx;
        
    }
};
