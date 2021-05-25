class Solution
{
	public:
	void p(vector<string>& v,string s, int a,int b)
	{
	    if(a==b) {v.push_back(s); return;}
	    
	    for(int i=a;i<=b;++i)
	    {
	        swap(s[a],s[i]);
	        p(v,s,a+1,b);
	        swap(s[a],s[i]);
	    }
	    
	    
	}
		vector<string>find_permutation(string S)
		{
		    vector<string> v;
		    p(v,S,0,(int)S.length()-1);
		    sort(v.begin(),v.end());
		    return v;
		}
};
