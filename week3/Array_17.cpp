class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int mn=INT_MAX;
        for(int i=1;i<n;++i)
        {
            mn=min(arr[i]-arr[i-1],mn);
        }
        for(int i=1;i<n;++i)
        {
            if(arr[i]-arr[i-1]==mn)
            ans.push_back({arr[i-1],arr[i]});
        }
        return ans;
    }
};
