class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        int row[9][9]={};
        int col[9][9]={};
        int grid[9][9]={};
        int n=b[0].size();
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<n;j++)
            {
              if(b[i][j]!='.')
              {
                int num=b[i][j]-'0';
                int k=i/3*3+j/3;
                  if(row[i][num-1]++ ||col[j][num-1]++||grid[k][num-1]++)
                  return false;
              }
            
            }
        }
        return true;

    }
};
