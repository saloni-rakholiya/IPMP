class Solution{
    public:
    /*  function to find position of first set 
    bit in the given number
     * n: given input for which we want to get
          the position of first set bit
     */
    unsigned int getFirstSetBit(int n){
        int ans=0;
        
        while(n){
            ans++;
            if(n&1) break;
            n=n>>1;
        }
        return ans;
        // Your code here
        
        
    }
};
