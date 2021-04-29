class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        unordered_map<int,int> m;
        
        for(int i=0;i<n;++i)
        {
            if(m.find(a[i])==m.end())
            m[a[i]]=1;
            else {
                if(m[a[i]]>=n/2) return a[i];
                m[a[i]]++;
            }
        }
        int ans=-1;
        for(auto i=m.begin();i!=m.end();++i)
        {
            if(ans==-1 && (*i).second>=n/2) ans=(*i).first;
            else if((*i).second==m[ans]) return -1;
        }
        return ans;
        // your code here
        
    }
};
