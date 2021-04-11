class Solution {
public:
    int nextGreaterElement(int n) {
     string s=to_string(n);
     next_permutation(s.begin(),s.end());
     long long x=stoll(s);
      if(x>INT_MAX || x<=n) return -1;
        return x;
    }
};
//second
class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        string p=s;
        sort(p.begin(),p.end());
        reverse(p.begin(),p.end());
        if(p.compare(s)==0) return -1;
        int l=s.length();
        int i;
        cout<<s<<"\n";
        for( i=l-1;i>0;--i)
        {
            if(s[i]>s[i-1])break;
        }
        if(i==0) return -1;
        int num=s[i-1]-'0'; int mn=i; int j;
        for(j=i;j<l;++j) if(s[j]<=s[mn] && s[j]>s[i-1]) {cout<<"huh\n",mn=j;}
        cout<<s<<" "<<i<<" "<<mn<<"\n";
         s[i-1]=s[mn];s[mn]=num+'0';
        cout<<s<<"\n";
        sort(s.begin()+i,s.begin()+l);
        cout<<s;
        return stoll(s)>INT_MAX?-1:stoll(s);
    }
};
