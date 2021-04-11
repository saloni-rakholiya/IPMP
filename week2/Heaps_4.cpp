class Solution
{
	public:
	struct nod{
	  char data; int freq; nod* left; nod*right;
	  nod(char d,int f){
	      left=right=NULL;
	      this->data=d;this->freq=f;
	  }
	};
	
	struct cc {
	    bool operator ()(nod*a,nod* b)
	{
	    return (a->freq>b->freq);
	}};
	void prin(nod* a,string s,vector<string>& ans){
	    if(!a) return;
	    if(a->data!='#') ans.push_back(s);//v[a->data]=s;
	    prin(a->left,s+"0",ans);
	    prin(a->right,s+"1",ans);
	}

		vector<string> huffmanCodes(string s,vector<int> f,int n)
		{
		    nod *leftt,*rightt,*top;
		    priority_queue<nod*,vector<nod*>,cc> p;
		    for(int i=0;i<n;++i){
		        p.push(new nod(s[i],f[i]));}
		    while(p.size()!=1){
		        leftt=p.top();p.pop();rightt=p.top();p.pop();
		        top=new nod('#',leftt->freq+rightt->freq);
		        top->left=leftt;top->right=rightt;
		        p.push(top);
		    }
		    vector<string> ans;
		    prin(p.top(),"",ans);
		    return ans;
		}
};
