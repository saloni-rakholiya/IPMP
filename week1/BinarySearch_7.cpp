#include<bits/stdc++.h>
using namespace std;

int b(vector<int> a,int n)
{
    vector<int> v;
    int i=0,j=n-1;
    int m;
    while(i<=j)
    {
        m=i+(j-i)/2;
        if(a[m]==m) return m;
        else if(a[m]>m){
            j=m-1;
        }
        else {
            i=m+1;
        }
    }
    return -1;
}
int main()
{
	int n;
	vector<int> a;
	int x;
	cin>>n;
	for(int i=0;i<n;++i) {
		cin>>x;
		a.push_back(x);
	}
	cout<<b(a,n);
}
