class Solution{
public:		

		
	int lps(string s)
	{
	    int n=s.length();
	    int i=0; int j=1;
	    vector<int> a(n,0);
	    while(j<n){
	        if(s[j]==s[i])
	        {
	            a[j]=i+1;
	            ++j;++i;
	        }
	        else {
	            if(i==0){++j;}
	            else {
	                i=a[i-1];
	            }
	        }
	    }
	   // int mx=INT_MIN;
	   // for(int i=0;i<n;++i)
	   //{ mx=max(mx,a[i]);}
	   //cout<<"\n";
	    return a[n-1];
	}
};
