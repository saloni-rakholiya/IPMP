long long maximumAmount(int arr[], int n) 
{
    vector<vector<long long>> a(n,vector<long long>(n,0));
    for(int p=0;p<n;++p)
    {
        int i=0; int j=p;
        while(i<n && j<n)
        {
            long long x=(i+2<n)?a[i+2][j]:0;
            long long y=(i+1<n && j-1>=0)?a[i+1][j-1]:0;
            long long z=(j-2>=0)?a[i][j-2]:0;
            a[i][j]=max(arr[i]+min(x,y),arr[j]+min(y,z));
            ++i;++j;
        }
    }
    return a[0][n-1];
}
