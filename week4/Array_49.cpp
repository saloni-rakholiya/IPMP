long countInversions(vector<int> arr) {
 multiset<int> set1;
    set1.insert(arr[0]);
    int n=arr.size();
    long invcount = 0; 
    multiset<int>::iterator itset1; 
    for (int i=1; i<n; i++)
    {
        set1.insert(arr[i]);
        itset1 = set1.upper_bound(arr[i]);
        invcount += distance(itset1, set1.end());
    }
    return invcount;

}

