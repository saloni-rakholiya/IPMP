#include<bits/stdc++.h>
using namespace std;
void solve()
{
	unsigned long long n,x,t;
	cin>>n>>x>>t;
	unsigned long long each=0,ans=0;
	each=t/x;
	if(t<x) {
		cout<<0<<"\n"; return;
	}
	if(each>n){
		ans=n*(n-1)/2;
	}
	else ans=each*(each-1)/2+(n-each)*each;
	cout<<ans<<"\n";
	
}
int main(){
	long long t;
	cin>>t;
	while(t--)
	{
		solve();
	}
//solve2();
	return 0;
}
