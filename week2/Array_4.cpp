class Solution
{
public:
    vector<int> singleNumber(vector<int> a) 
    {
        vector<int> v;
        int n=a.size();
        sort(a.begin(),a.end());
        if(n>1 && a[0]!=a[1]) v.push_back(a[0]);
        
        for(int i=1;i<n-1;++i){
            if(a[i]==a[i-1] || a[i]==a[i+1]){;}else  v.push_back(a[i]);
        }
        
        
        if(n>1 && a[n-1]!=a[n-2])v.push_back(a[n-1]);
        return v;
    }
};
