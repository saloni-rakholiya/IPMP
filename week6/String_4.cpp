class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string str="";
        vector<string> ans;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')++i;
            str="";
            int j=i;
            while(i<n && s[i]!=' ')
                {str+=s[i++];}
            if(i!=j)
            ans.push_back(str);
        }
        n=ans.size();
        string f="";
        cout<<n;
        for(int i=n-1;i>=0;--i)
            {f+=ans[i];
        if(i>=1)f+=" ";}
        
        return f;
    }
};
