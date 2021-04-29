
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int mx=a[n-1];
        vector<int> ans;
        for(int i=n-1;i>=0;--i)
        {
            mx=max(mx,a[i]);
            if(mx==a[i]) ans.push_back(a[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//new
