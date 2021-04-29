class Solution{
  public:
    vector<int> duplicates(int nums[], int n) {
         vector<int> ans;
        for(int i=0;i<n;++i)
        {
            if((nums[i]%n)>=0)
            nums[(nums[i]%n)]+=n;
        }
        for(int i=0;i<n;++i)
        {
            if(nums[i]>=(2*n))ans.push_back(i);
        }
        if((int)ans.size()==0) ans.push_back(-1);
       return ans;
        
    }
};

//sec
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i ++){
            nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
            if(nums[abs(nums[i])-1] > 0) res.push_back(abs(nums [i]));
        }
        return res;
    }
};
