 void insertionSort(int arr[], int n)
    {
        int i,j,t;
        for(i=1;i<n;++i)
        {
            j=i-1;
             t=arr[i];
            while(j>=0 && arr[j]>t)
            {
                arr[j+1]=arr[j];
                --j;
            }
                arr[j+1]=t;
        }
    }
