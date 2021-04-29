class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	int bitonic(vector<int> arr, int n) {
	    vector<int> inc(n,1),dec(n,1);
	    inc[0]=1; dec[0]=1;
	    for(int i=1;i<n;++i)
	    {
	        if(arr[i]>=arr[i-1]) inc[i]=inc[i-1]+1;
	    }
	    for(int i=1;i<n;++i)
	    {
	        if(arr[i]<=arr[i-1]) inc[i]=inc[i-1]+1;
	    }
	    int ans=1;
	    for(int i=0;i<n;++i)
	    {
	        if(ans<inc[i]+dec[i]-1) ans=inc[i]+dec[i]-1;
	    }
	    return ans;
	}
};
