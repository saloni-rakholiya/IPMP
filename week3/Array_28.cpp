class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    int i=0; int j=n-1;
	    while(i<j)
	    {
	        if(arr[i]%2==0) i++;
	        else if(arr[j]%2==1) j--;
	        else {
	            int t=arr[i];arr[i]=arr[j];arr[j]=t;
	            ++i;--j;
	        }
	    }
	    i=0;
	    while(arr[i+1]%2==0)++i;
	    if(i<n-1)
	    {
	        sort(arr,arr+i+1);
	        sort(arr+i+1,arr+n);
	    }
	}
};
