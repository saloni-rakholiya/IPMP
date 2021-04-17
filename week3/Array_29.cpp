void binSort(int a[], int n)
{
   int i=0; int j=n-1;
   while(i<j)
   {
       if(a[i]==0) ++i;
       else if(a[j]==1) --j;
       else {
           int t=a[i];a[i]=a[j];a[j]=t;
           ++i;--j;
       }
   }
}
