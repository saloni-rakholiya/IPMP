#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	if(k>pow(2,n)) {
		cout<<"oops";
		return 0;
	}
	int a=0;
	if(n==0) {
		cout<<a;
		return 0;
	}
	string s="0";
	for(int i=1;i<=n;++i)
	{
		int p=s.length();
		string st=s;
		for(int j=0;j<p;++j)
		{
			if(s[j]=='0')
			st+="1";
			else st+="0";
		}
		s=st;
		cout<<s<<"\n";
	}
	
	cout<<"answer= "<<s[k-1];
	return 0;
}
