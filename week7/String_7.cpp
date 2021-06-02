class Solution{
public:
int fa(int n, int k){
    int ans=1;
    for(int i=n;i>=1;--i)
    ans=(ans*i);
    return ans;
}

int coun(string s, int r, int l)
{
    int ans=0;
    for(int i=r+1;i<=l;++i)
    {if(s[r]>s[i]) ++ans;
        
        else if(s[r]==s[i]) return -1;
    }
    return ans;
}
    int rank(string s){
        int k=1000003;
        int n=s.length();
        int f=fa(n,k);
        // cout<<f;
        int c;
        int ans=0;
        for(int i=0;i<n;++i)
        {
            f=f/(n-i);
            c=coun(s,i,n-1);
            if(c==-1) return 0;
            c=c%k;
            // cout<<c<<"-"<<f<<"\n";
            ans+=(c*f)%k;
            ans=ans%k;
        }
        return (ans+1)%k;
    }
};
