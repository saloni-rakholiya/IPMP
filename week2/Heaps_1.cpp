#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> a,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    int in=0;
    for(int i=0;i<k;++i) pq.push(a[i]);
    for(int i=k;i<n;++i)
    {
        a[in++]=pq.top();
        pq.pop();
        pq.push(a[i]);
    }
    while(!pq.empty() && in<n)
    {
        a[in++]=pq.top();pq.pop();
    }
    for(int i=0;i<n;++i) cout<<a[i]<<" ";
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;++i)cin>>a[i];
	    solve(a,n,k); cout<<"\n";
	}
	return 0;
}
