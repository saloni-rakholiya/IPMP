class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1=m-l+1,n2=r-m;
        vector<int> a(n1),b(n2);
        int k=0;
        for(int i=0;i<n1;++i)a[i]=arr[l+i];
        for(int i=0;i<n2;++i)b[i]=arr[m+1+i];
        int i=0,j=0; int p=l;
        while(i<n1&&j<n2)
        {
            if(a[i]<=b[j]) arr[p++]=a[i++];
            else arr[p++]=b[j++];
        }
        
        while(i<n1)
        {
           arr[p++]=a[i++];
            
        }
        
        while(j<n2)
        {
            arr[p++]=b[j++];
        }
        
    }     
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int s; 
        int n=r+1-l;
        for(s=1;s<n;s=2*s)
        for(l=0;l<n-1;l+=2*s)
        {
            int m=min(n-1,l+s-1);
            int r=min(n-1,l+2*s-1);
            merge(arr,l,m,r);
        }
        
    }
};
