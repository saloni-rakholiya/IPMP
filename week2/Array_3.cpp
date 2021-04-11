
int MissingNumber(vector<int>& a, int n) {
    int ans=a[0];
    int ans2=1;
    for(int i=1;i<n-1;++i)
    {
        ans=ans^a[i];
    }
    for(int i=2;i<=n;++i)
    {
        ans2=ans2^i;
    }
    return ans^ans2;
}
