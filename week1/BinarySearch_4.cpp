class Solution {
public:
    //leetcode https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
    int floorr(vector<int> a, int n)
    {
        int s=a.size();
        int i=0; int j=s-1;
        int m;
        while(i<=j)
        {
            m=i+(j-i)/2;
            if((m==0 || a[m]!=a[m-1]) && a[m]==n) return m;
            else if(n<=a[m]) j=m-1;
            else i=m+1;
        }
        return -1;
    }
    
    int ceill(vector<int> a, int n)
    {
        int s=a.size();
        int i=0; int j=s-1;
        int m;
        while(i<=j)
        {
            m=i+(j-i)/2;
            if((m==s-1 || a[m]!=a[m+1]) && a[m]==n) return m;
            else if(n<a[m]) j=m-1;
            else i=m+1;
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int a=floorr(nums,target);
        int b=ceill(nums,target);
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        return v;
        
    }
};
