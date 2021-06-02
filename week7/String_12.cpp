#include<bits/stdc++.h>
using namespace std;

void cmp(string a,string b){
	vector<int> v(26,0);
	for(int i=0;i<b.length();++i)
	v[b[i]-'a']++;
	string ans="";
	for(int i=0;i<a.length();++i)
	if(v[a[i]-'a']==0) ans+=a[i];
	cout<<ans;
}
int main(){
	string a,b;
	cin>>a>>b;
	cmp(a,b);
	return 0;
}
