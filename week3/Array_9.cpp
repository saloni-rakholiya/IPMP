//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    unordered_map<int,int> m;
	    for(int i=0;i<n;++i)
	    m[arr[i]*arr[i]]++;
	    
	    for(int i=0;i<n;++i)
	    for(int j=i+1;j<n;++j)
	    if(m.find(arr[i]*arr[i]+arr[j]*arr[j])!=m.end())
	    return true;
	    return false;
	    
	}
};

//second
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	   sort(arr,arr+n);
	   for(int i=0;i<n;++i) arr[i]*=arr[i];
	   for(int i=n-1;i>=0;--i)
	   {
	       int l=0; int r=i-1;
	       while(l<r)
	       {
	           if(arr[l]+arr[r]==arr[i]) return true;
	           else if (arr[l]+arr[r]<arr[i]) ++l;
	           else --r;
	       }
	   }
	   return false;
	    
	}
};
