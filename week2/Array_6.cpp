bool iss(string s)
    {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]!='9') return false;
        }
        return true;
    }
string Solution::solve(string s) {
    int n=s.length();
    
    if(iss(s)){
        string p="";
        for(int i=0;i<=n;++i)p+='0';
        p[0]=p[n]='1';
        return p;
    }
    
    int mid=n/2;
    int i,j;
    i=mid-1;
    if(n%2==0) j=mid; else j=mid+1;
    
    while(s[i]==s[j]){
        --i; ++j;
    }
    bool f=false;
    if(i<0||s[i]<s[j]) f=true;
    while(i>=0){
        s[j++]=s[i--];
    }
    
    if(f){
        int c=1;
        i=mid-1;
        if(n%2==0){
            j=mid;
        }
        else {
         s[mid]=s[mid]+c;
         c=(s[mid]-'0')/10;
         s[mid]=((s[mid]-'0')%10)+'0';
         j=mid+1;
        }
        while(i>=0){
            s[i]+=c;
            c=(s[i]-'0')/10;
            s[i]=((s[i]-'0')%10)+'0';
            s[j++]=s[i--];
        }
    }
    return s;
}

