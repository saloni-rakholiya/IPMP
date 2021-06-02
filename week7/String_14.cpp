class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int> a(256,-1);
        int len=0;
        int left=0; int right=0;
        while(right<n)
        {
            if(a[s[right]]==-1) {a[s[right]]=right;}
            else{
                left=max(left,a[s[right]]+1);
                a[s[right]]=right;
            }
            len=max(len,right-left+1);
            ++right;
        }
        return len;
        
    }
};
