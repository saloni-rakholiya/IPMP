class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> ans(n,-1);
        stack<long long> s;
        for(int i=0;i<n;++i)
        {
            if(s.empty()){
                s.push(i);
            }
            else {
                while(!s.empty()&&arr[s.top()]<arr[i])
                {
                    ans[s.top()]=arr[i];
                    s.pop();
                }
            }
            s.push(i);
        }
        return ans;
    }
};
