class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int temp=0;
        int n=matrix.size();
       for (int i = 0; i < n; i++) 
        for (int j = i; j < n; j++)
            {
              temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        
            for(int j=0;j<n/2;++j) 
             for(int i=0;i<n;++i)   
               {
                   temp=matrix[i][j];
                   matrix[i][j]=matrix[i][n-1-j];
                   matrix[i][n-j-1]=temp;
                   
               }          
    }  
};
