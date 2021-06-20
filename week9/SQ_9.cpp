class Solution
{
    public:
    //Function to calculate the span of stock’s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans;
       stack<int>s;
       for(int i=0;i<n;++i)
       {
           if(s.empty()) s.push(i);
           while(!s.empty()&&price[s.top()]<=price[i])
           s.pop();
           if(s.empty())
           ans.push_back(i+1);
           else ans.push_back(i-s.top());
           s.push(i);
       }
       return ans;
    }
};
