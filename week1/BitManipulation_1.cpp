class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long x){
        return x && (!(x&(x-1)));
        // Your code here    
        
    }
};
