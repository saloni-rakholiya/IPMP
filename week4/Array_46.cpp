class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    ll FindMaxSum(ll arr[], ll n)
    {
       ll inc=arr[0],excl=0;
       if(n==1) return arr[0];
       ll ans=0;
       for(ll i=1;i<n;++i)
       {
           ll t=inc;
           ll k=excl;
           inc=excl+arr[i];
           excl=max(t,k);
       }
       return max(inc,excl);
    }
};
