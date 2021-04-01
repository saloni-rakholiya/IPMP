class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        
        int i=0;int j=n-1;
        int m;
        while(i<=j){
            m=i+(j-i)/2;
            if(m!=0&&nums[m]<nums[m-1]) return nums[m];
            else if( nums[m]<nums[i]) j=m-1;
            else if( nums[m]>nums[j]) i=m+1;
            else {
                j=m-1;
            }
        }
        return nums[0];
    }
};
