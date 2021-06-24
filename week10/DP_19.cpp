class Solution {
  public:
  int kadane(vector<int> a, int n)
  {
      int i, sum=0; int mx=INT_MIN;
      for(int i=0;i<n;++i)
      {
          sum+=a[i];
          if(sum>mx){
              mx=sum; 
          }
          if(sum<0){
              sum=0;
          }
          
      }
      return mx;
  }
    int maximumSumRectangle(int r, int c, vector<vector<int>> m) {
        // code here
        int s,mxx=INT_MIN;
        vector<int> a(r,0);
        for(int left=0;left<c;++left)
        {
            a=vector<int>(r,0);
            for(int right=left;right<c;++right)
            {
                for(int i=0;i<r;++i)
                a[i]+=m[i][right];
                s=kadane(a,r);
                if(s>mxx) {
                    mxx=s;
                }
            }
        }
        return mxx;
    }
};
