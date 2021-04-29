#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
    
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> nums(n);
	    for(int i=0;i<n;++i)cin>>nums[i];
	    int j;
        int p=gcd(n,k);
        for(int i=0;i<p;++i)
        {
            int t=nums[i];
            j=i;
            while(true)
            {
                int d=(j+k)%n;
                nums[j]=nums[(j+k)%n];
                if(d==i)
                {break;}
                j=d;
            }
            nums[j]=t;
        }
        for(int i=0;i<n;++i)cout<<nums[i]<<" ";
        cout<<"\n";
	}
	return 0;
}
