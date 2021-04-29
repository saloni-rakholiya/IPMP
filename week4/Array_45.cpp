class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int mx=0; 
        int sum=0;
        int n=nums.size();
        unordered_map<int,int> m;
        m[0]=-1;
        for(int i=0;i<n;++i)
        {
           sum+= (nums[i]==1)?1:-1;
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            else mx=max(mx,i-m[sum]);
        }
        return mx;
    }
};
