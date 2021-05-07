void MatrixInplaceTranspose(int *A, int r, int c)
{
    int size = r*c - 1;
    int t; 
    int next;
    int cycleBegin; 
    int i;
    bitset<HASH_SIZE> b;
    b.reset();
    b[0] = b[size] = 1;
    i = 1;
    while (i < size)
    {
        cycleBegin = i;
        t = A[i];
        do
        {
            next = (i*r)%size;
            swap(A[next], t);
            b[i] = 1;
            i = next;
        }
        while (i != cycleBegin);
        for (i = 1; i < size && b[i]; i++)
            ;
        cout << endl;
    }
}
