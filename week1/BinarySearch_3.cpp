#include<bits/stdc++.h>
using namespace std;
int b(vector<int> a, int n)
    {
        int s=a.size();
        int i=0; int j=s-1;
        int m;
        while(i<=j)
        {
            m=i+(j-i)/2;
            if((m==0 || a[m]!=a[m-1]) && a[m]==n) return m;
            else if(n<=a[m]) j=m-1;
            else i=m+1;
        }
        return -1;
    }
    bool is_majority(vector<int> a, int n)
    {
        
        int s=a.size();
        int x=b(a,n);
        if(x==-1) return false;
        
        if(x+s/2<s && a[x+s/2]==a[x]) return true;
        return false;
    }
    
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i)
	cin>>a[i];
	int x;
	cin>>x;
	if(is_majority(a,x)) cout<<"Yes majority";
	else cout<<"Not majority";
	
	return 0;
}
