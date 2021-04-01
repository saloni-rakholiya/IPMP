class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x=32;
       uint32_t ans=0;
        while(n)
        {
            x--;
            if(n&1){
                ans=ans|(1<<x);
            }
            n=n>>1;
        }
        n=ans;
        return ans;
    }
};
