class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>row;
        vector<int>col;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                  row.push_back(i);
                  col.push_back(j);
                }
            }
        }
        sort(row.begin(),row.end());
        sort(col.begin(),col.end());
        return (row[row.size()-1]-row[0]+1)*(col[col.size()-1]-col[0]+1);

        
    }
};