class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high) return;
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int p=arr[high];
        int ii=low-1;
        for(int i=low;i<high;++i)
        {
            if(arr[i]<p){
                ii++;
                int t=arr[ii];arr[ii]=arr[i];arr[i]=t;
            }
        }
        int x=arr[ii+1];
        arr[ii+1]=p;
        arr[high]=x;
        return ii+1;
       // Your code here
    }
};
