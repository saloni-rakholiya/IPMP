class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int steps=0;
        int rn=0;
        if(n==1) return steps;
        
        int mx=0;
        for(int i=0;i<n;++i)
        {
            if(i>rn)
            {
                steps++;
                rn=mx;
            }
            if(nums[i]+i>mx) mx=nums[i]+i;
        }
        return steps;
    }
};

//

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int steps=1;
        int rn=nums[0];
        if(n==1 || nums[0]==0) return 0;
        int mx=nums[0];
        for(int i=0;i<n;++i)
        {
            if(i==n-1) return steps;
            mx=max(mx,nums[i]+i);
            if(i==rn){
                rn=mx;++steps;
            }
        }
        return steps;
    }
};
