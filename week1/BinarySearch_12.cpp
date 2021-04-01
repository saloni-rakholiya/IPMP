#include<bits/stdc++.h>
using namespace std;
  
int b(int a[], int l, int r, int x)
{
	int m;
	while(l<=r)
	{
		m=l+(r-l)/2;
		if(a[m]==x)return m;
		else if(a[m]>x) r=m-1;
		else l=m+1;
	}
	return -1;
}

int findPos(int arr[], int key)
{
    int i=0; 
	int j=1;
	int f=arr[i];
	
	while(f<key){
		i=j;j*=2;f=arr[j];
	}
    return b(arr,i,j,key);
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170};
    int ans = findPos(arr, 10);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}
