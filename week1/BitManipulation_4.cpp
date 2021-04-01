class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int c=a^b;
        int ans=0;
        while(c)
        {
            c=c&(c-1);
            ans++;
        }
        return ans;
    }
};
