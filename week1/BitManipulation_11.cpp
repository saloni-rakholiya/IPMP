class Solution {
  public:
    int findPosition(int n) {
        if(n==0) return -1;
        if(pow(2,(int)log2(n))==n)
        return log2(n)+1;
        return -1;
        // code here
    }
};
