class Solution{
    public:
    // function to swap odd and even bits
    unsigned int swapBits(unsigned int n)
    {
    	bitset<32> odds(string("10101010101010101010101010101010"));
    	bitset<32> evens(string("01010101010101010101010101010101"));
    	int a=n&odds.to_ulong();
    	int b=n&evens.to_ulong();
    	a=a>>1;
    	b=b<<1;
    	
    	return a|b;
    	// Your code here
    	
    }
};
