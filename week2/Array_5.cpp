class Solution{
    public:
    vector<int> twoOddNum(int a[], int N)  
    {
        int ans=a[0];
        for(int i=1;i<N;++i)
        {
            ans=ans^a[i];
        }
        int x=0,y=0;
        int s=ans&~(ans-1);
        for(int i=0;i<N;++i)
        {
            if(a[i]&s) x=x^a[i];
            else y=y^a[i];
        }
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        sort(v.rbegin(),v.rend());
        return v;
    }
};
