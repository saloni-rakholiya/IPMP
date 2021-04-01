#include<bits/stdc++.h>
using namespace std;
int med(int a[],int n)
{
	if(n%2==0) return (a[n/2]+a[n/2 -1])/2; 
	return a[n/2];
}
int m(int a[],int b[],int n)
{
	if(n<=0) return -1;
	if(n==1) return (a[0]+b[0])/2;
	if(n==2) return (max(a[0],b[0])+min(a[1],b[1]))/2;
	int m1=med(a,n);
	int m2=med(b,n);
	if(m1==m2) return m1;
	if(m1<m2){
		if(n%2==0) return m(a+n/2 -1,b,n/2 +1);
		return m(a+n/2,b,n-n/2);
	}
	if(n%2==0) return m(a,b+n/2-1,n/2 +1);
	return m(a+n/2,b,n-n/2);
}
int main()
{
	int a[]={1,2,3,6};
	int b[]={4,6,8,10};
	int n=4;
	cout<<m(a,b,n);
}
