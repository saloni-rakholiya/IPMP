#include <bits/stdc++.h>
using namespace std;
int main()
{
	char arr[] = { '1', 'a', '3','b','8' };
	int n=5;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(isalnum(arr[i])==2)
		{
			reverse(arr,arr+i);
			reverse(arr+i,arr+n);
		break;
		}
	}
	reverse(arr,arr+n);

for(int i=0;i<n;i++)
cout<<arr[i];
return 0;
}
