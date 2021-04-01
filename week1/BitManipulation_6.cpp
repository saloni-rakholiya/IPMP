unsigned int getAbs(int n)
{
    int mask=n>>(32- 1);
    return ((n + mask) ^ mask);
}
