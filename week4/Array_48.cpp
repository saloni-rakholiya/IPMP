


//next
class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    
	    for(int i=0;i<n;++i)
	    {
	       arr[(arr[i])%k]+=n;
	    }
	    
	    int mx=0;
	    int pos=0;
	   // for(int i=0;i<n;++i) cout<<arr[i]<<",";
	   // cout<<"\n";
	    for(int i=0;i<n;++i)
	    if(arr[i]/n>mx)
	    {
	        mx=arr[i]/n;
	        pos=i;
	    }
	    
	    return pos;
	}

};
