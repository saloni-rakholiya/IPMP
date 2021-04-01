class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
        int s=a.size();
        int diff;
        int first=-1; int last=-1;
        for(int i=0;i<s-1;++i)
            if(a[i]>a[i+1]) {first=i; break;}
        for(int i=s-1;i>0;--i)
            if(a[i]<a[i-1]){ last=i;break;}
        if(first==-1 && last==-1){
            return 0;
        }
        int mx=INT_MIN; int mn=INT_MAX;
        for(int i=first;i<=last;++i)
        {
            mx=max(mx,a[i]);mn=min(mn,a[i]);
        }
        for(int i=0;i<first;++i)
        {
            if(a[i]>mn) {first=i;break;}
        }
        for(int i=s-1;i>last;--i)
        {
            if(a[i]<mx) {
                last=i; break;
            }
        }
        diff=abs(1-first+last);
        return diff;
    }
};
