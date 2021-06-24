class Solution{
public:
    int matrixMultiplication(int n, int p[])
    {int m[n][n]={0};int i,j,k;int d,q;
    for(int pt=1;pt<n;++pt)
    {
        int j=pt;
        i=0;
        while((j++)<n && (i++)<n)
        {
            m[i][j]=INT_MAX;
            for(k=i;k<=j-1;k++)
            {
                 q=m[i][k]+m[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<m[i][j])
                {
                    m[i][j]=q;
                }
            }
        }
    }
    return m[1][n-1];
    }
};

