#include<bits/stdc++.h>
using namespace std;
void uni(vector<int>a,vector<int>b)
{
	cout<<"Union\n";
	int n=a.size(); int m=b.size();
	vector<int> ans;
	int i=0;int j=0;
	while(i<n && j<m){
		if(a[i]==b[j]) {ans.push_back(a[i++]);++j;
		} else
		if(a[i]<b[j]) ans.push_back(a[i++]);
		else ans.push_back(b[j++]);
	}
	while(i<n)ans.push_back(a[i++]);
	while(j<m)ans.push_back(b[j++]);
	for(int i=0;i<(int)ans.size();++i)
	cout<<ans[i]<<" ";
	cout<<"\n";
}
void inter(vector<int>a,vector<int>b){
	cout<<"Intersection\n";
	int n=a.size(); int m=b.size();
	vector<int> ans;
	int i=0;int j=0;
	while(i<n && j<m){
	if(a[i]==b[j]) {ans.push_back(a[i++]);++j;
	} else
	if(a[i]<b[j]) i++;
	else j++;
	}
	for(int i=0;i<(int)ans.size();++i)
	cout<<ans[i]<<" ";
	cout<<"\n";
}
int main()
{
	vector<int> a(10);a={1,5,6,8,9,10,12,19,20,100};
	vector<int> b(10);b={0,2,3,5,9,12,20,22,26,90};
	uni(a,b);
	inter(a,b);
	return 0;
	
}
