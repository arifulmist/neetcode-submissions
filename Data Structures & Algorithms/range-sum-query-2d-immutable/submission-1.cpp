class NumMatrix {
    private:
        vector<vector<int>>prf;
public:
    NumMatrix(vector<vector<int>>& ma) {
      const int m=ma.size();
     const  int n=ma[0].size();
       prf=vector<vector<int>>(m+1,vector<int>(n+1,0));
       for(int i=1;i<=m;i++)
       {
        for(int j=1;j<=n;j++)
        {
            prf[i][j]=ma[i-1][j-1]+prf[i-1][j]+prf[i][j-1]-prf[i-1][j-1];
        }
       }

    }
    
    int sumRegion(int r1, int c1, int r2, int c2) {
        int ans=prf[r2+1][c2+1]-prf[r1][c2+1]-prf[r2+1][c1]+prf[r1][c1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */