class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long ans=0;
        stack<int> s;
        int i=0;
        for( i=0;i<n;)
        {
            if(s.empty()||arr[s.top()]<=arr[i]){
                s.push(i);
                ++i;
            }
            else {
                int tp=s.top();s.pop();
                ans=max(ans,arr[tp]*(s.empty()?i:i-s.top()-1));
        
        }}
        while(!s.empty())
        {
            int tp=s.top();s.pop();
                ans=max(ans,arr[tp]*(s.empty()?i:i-s.top()-1));
        
        }
        return ans;
    }
};
