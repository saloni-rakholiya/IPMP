#include<bits/stdc++.h>
using namespace std;

void reverse(string&s,int a,int b)
{
	if(a>b) return;
	while(a<b)
	{
		swap(s[a],s[b]);
		a++;
		b--;
	}
}
void cycle(string &s,int shift, int b)
{
	int j;
	char c;
	for(int i=1;i<b;i=i*3){
		c=s[i+shift];
		j=i;
		do{
			if(j&1){
				j=b/2+j/2;
			}
			else {
				j=j/2;
			}
			swap(s[j+shift],s[i+shift]);
		}
		while(j!=i);
	}
}
void ans(string&s)
{
	int rem=s.length();
	int shift=0;
	int curr=0;
	while(rem)
	{
		int k=0;
		while(pow(3,k)+1<=rem)
		{
			++k;
		}
		curr=pow(3,k-1)+1;
		rem-=curr;
		cycle(s,shift,curr);
		reverse(s,shift/2,shift-1);
		reverse(s,shift,shift+curr/2-1);
		reverse(s,shift/2,shift+curr/2-1);
		shift+=curr;
	}
}
int main(){
	string s="a1b2c3d4e5f6g7";
	ans(s);
	cout<<s;
	return 0;
}
