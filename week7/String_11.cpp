#include<bits/stdc++.h>
using namespace std;

//s1<s2=-1
//s1>s2=1
int cmp(string s ,string t){
	int n=s.length();
	int m=t.length();
	if(n<m) return -1;
	else if(m>n)return 1;
	for(int i=0;i<n;++i)
	{
		s[i]=tolower(s[i]);
		t[i]=tolower(t[i]);
		if(s[i]<t[i]) return -1;
		else if(s[i]>t[i]) return 1;
	}
	return 0;
}

int main(){
	string a,b;
	cin>>a>>b;
	cout<<cmp(a,b);
	return 0;
}
