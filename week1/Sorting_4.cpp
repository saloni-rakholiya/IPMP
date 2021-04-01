#include <bits/stdc++.h>
using namespace std;

void c(vector<char> a)
{
	int n=a.size();
	vector<int> ans(n,'a');
	vector<int> f(256,0);
	
	for(int i=0;i<n;++i) {
	f[a[i]]++;}
	for(int i=1;i<256;++i) f[i]+=f[i-1];
	
	for(int i=0;i<n;++i)
	{
		ans[f[a[i]]-1]=a[i];
		--f[a[i]];
	}
	
	for(int i=0;i<n;++i) cout<<(char)ans[i]<<" ";
	
}

int main()
{
	vector<char> a={'2','1','0','3','3','6','7','5','1'};
	cout<<"\n";
	c(a);
	return 0;
}
