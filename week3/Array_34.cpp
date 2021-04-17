#include<iostream>
using namespace std;

struct nod
{
    int mn;
    int mx;
};
 
nod getMinMax(int arr[], int n)
{
	nod m; 
	int i; 
	if(n%2==0) {
		if(arr[0]>arr[1])
		{m.mn=arr[1]; m.mx=arr[0];}
		else 
		{m.mn=arr[0]; m.mx=arr[1];}
		
		i=2;
	}
	else {
		m.mn=arr[0]; m.mx=arr[0];
		i=1;
	}
		
		
	while(i<n-1)
	{
		if(arr[i]>arr[i+1])
		{
			m.mn=min(m.mn,arr[i+1]);
			m.mx=max(m.mx,arr[i]);	
		}
		else {
			m.mn=min(m.mn,arr[i]);
			m.mx=max(m.mx,arr[i+1]);	
		}
		++i;++i;
	}	
    
    return m;
}
 
// Driver code
int main()
{
    int arr[] = { 1000, 11, 445,1, 330, 3000 };
    int arr_size = 6;
     
    nod minmax = getMinMax(arr, arr_size);
     
    cout << "nMinimum element is "
        << minmax.mn << endl;
    cout << "nMaximum element is "
        << minmax.mx;
         
    return 0;
}
