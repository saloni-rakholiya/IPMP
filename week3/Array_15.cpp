class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i;
	    int isfound=0;
	    for(i=0;i<m;++i)
	    if(arr[0][i]==1){
	        isfound=1; break;
	    }
	    int index=0;
	    if(isfound==0) i=m-1;
	    else --i;
	    for(int j=1;j<n;++j)
	    {
	        while(i>=0&&arr[j][i]==1)
	        {
	            --i;
	            isfound=1;
	            index=j;
	        }
	    }
	    if(isfound==0) return -1;
	    return index;
	}

};

