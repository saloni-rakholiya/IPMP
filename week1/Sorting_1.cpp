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
        if(l>=r) return;
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};
