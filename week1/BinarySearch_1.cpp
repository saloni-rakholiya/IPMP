class Solution {
public:
    //ascending order- leetcode qs
    int search(vector<int>& nums, int target) {
        int mid;
        int s=nums.size();
        int i=0; int j=s-1;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(nums[mid]==target) return mid;
            else if(i==j) return -1;
            else if(nums[mid]<target) i=mid+1;
                else j=mid-1;
        }
        return -1;
    }
};
