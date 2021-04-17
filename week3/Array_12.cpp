
class Solution{
    public:
    // Function to find the two repeated element
    // arr: input array
    // N: denoting that the size of array is N + 2 and range of elements is [1, N]
    pair<int,int> twoRepeated (int arr[], int n)
    {
        vector<int> f(n+1,0);
        int flag=0;
        int a,b;
        for(int i=0;i<n+2;++i) {f[arr[i]]++;
            if(f[arr[i]]==2){
                if(flag==0) {a=arr[i];flag=1;}
                else {b=arr[i]; break;}
            }
        }
        pair<int,int> p={a,b};
        return p;
    }
};

