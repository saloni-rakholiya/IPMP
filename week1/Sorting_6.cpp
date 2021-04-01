class Solution
{

    public:
    void buildHeap(int arr[], int n)  { 
        for(int i=1;i<n;++i)
        {
            if(arr[i]>arr[(i-1)/2])
            {
                int j=i;
                while(arr[j]>arr[(j-1)/2])
                {
                    int t=arr[j];arr[j]=arr[(j-1)/2];arr[(j-1)/2]=t;
                    j=(j-1)/2;
                }
            }
        }
    // Your Code Here
}

    
    public:
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        for(int i=n-1;i>=0;--i)
        {
            int t=arr[0];arr[0]=arr[i];arr[i]=t;
            int j=0;int in;
            do{
                in=2*j+1;
                if(arr[in]<arr[in+1] && in+1<i)in++;
                if(arr[j]<arr[in]&& in<i){swap(arr[j],arr[in]);}
                j=in;
            }while(in<n);
        }
        //code here
    }
};
