#include<bits/stdc++.h>
using namespace std;

//void r(string s,int i)
//{
//	if(i>=(int)s.length())
//	return;
//	r(s,i+1);
//	cout<<s[i];
//}

void r(string& s,int i,int j)
{
	if(i>=j) return;
	int a=s[i];
	s[i]=s[j];
	s[j]=a;
	r(s,i+1,j-1);
}

int main()
{
	string s="abcdefg hello";
	r(s,0,(int)s.length()-1);
	cout<<s;
	return 0;
}
