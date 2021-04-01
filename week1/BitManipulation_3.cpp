// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int setBits(int n) {
        int ans=0;
        while(n)
        {
            if(n&1) ans++;
            n=n>>1;
        }
        return ans;
        // Write Your Code here
    }
};
