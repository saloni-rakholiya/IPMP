    vector<int> subarraySum(int arr[], int n, int sum){
        int i=1; int j=0;  int s=arr[0];
        int f=0;
        while(true)
        {
            if(s<sum)
            {s+=arr[i];++i;}
            else if(s==sum) {f=1;break;} 
            else if(s>sum && j<n) {s-=arr[j];++j;}
            else if(i>n) break;
        }
        
        vector<int> ans;
        if(f==0) {ans.push_back(-1); return ans;}
        ans.push_back(j+1);
        ans.push_back(i);
        return ans;
        
    }
};
