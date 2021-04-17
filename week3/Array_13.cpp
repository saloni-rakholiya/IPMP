class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) {
        vector<int> ans;
        vector<int> right(n),left(n);
        right[n-1]=0; left[0]=0;
        int mn=INT_MAX; int mx=INT_MIN;
        for(int i=1;i<n;++i)
        {
            mn=min(mn,arr[i-1]);
            left[i]=mn;
        }
        for(int i=n-2;i>=0;--i)
        {
            mx=max(mx,arr[i+1]);
            right[i]=mx;
        }
        
        for(int i=1;i<=n-2;++i)
        {
            if(left[i]<arr[i] && arr[i]<right[i]){
                ans.push_back(left[i]);
                ans.push_back(arr[i]);
                ans.push_back(right[i]);
                break;
            }
        }
        return ans;
    }
};

//lc
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int c1=INT_MAX; int c2=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;++i)
        {
            if(nums[i]<=c1){
                c1=nums[i];
            }
            else if(nums[i]<=c2)
            {
                c2=nums[i];
            }
            else return true;
        }
        return false;
    }
};
