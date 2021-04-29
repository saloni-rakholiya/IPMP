class Solution {
    vector<int> nums;
public:
    Solution(vector<int> n) {
        this->nums=n;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int n=nums.size();
        vector<int> ans(n);
        ans=nums;
        for(int i=n-1;i>=0;--i)
        {
            int pos = rand()%(i+1);
            swap(ans[pos],ans[i]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
