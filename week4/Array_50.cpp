class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return nums[k-1];
    }
};

//sec

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> p;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(p.size()<k ) p.push(nums[i]);
            else if(nums[i]>p.top()){
                p.pop();
                p.push(nums[i]);
            }
            
        }
        return p.top();
    }
};
