class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int mn=a[0];
        int ans=INT_MIN;
        for(int i=1;i<n;++i)
        {
            mn=min(mn,a[i]);
            int c=a[i]-mn;
            ans=max(ans,c);
        }
        if(ans==INT_MIN) return 0;
        return ans;
    }
};
//next
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(); 
        vector<int> map(n);
       
        if(n==1) return 0;
        
        map[0]=0;
        map[1]=max(0,prices[1]-prices[0]);
        
        for(int i=2;i<n;++i)
        {
            map[i]=max({0,map[i-1],map[i-1]+prices[i]-prices[i-1]});
        }
        
        return map[n-1];
    }
};
//next
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(); 
        int c=0;  int i=0;
        while(i<n-1)
        {
            while(i<n-1 && prices[i+1]<=prices[i])
                ++i;
            if(i==n-1)
            {
                break;
            }
            int b=i;
            ++i;
            while(i<n && prices[i-1]<=prices[i])
            {
                ++i;
            }
            int s=i-1;
            c+=prices[s]-prices[b];
        }
        return c;
    }
};
