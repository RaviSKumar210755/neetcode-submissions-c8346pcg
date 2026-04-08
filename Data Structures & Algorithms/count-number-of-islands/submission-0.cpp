class Solution {
    int row[4] = {-1,0,1,0};
    int col[4] = {0,-1,0,1};
    void solve(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<int>>& vis){
        vis[i][j] = 1;
        for(int idx = 0;idx<4;idx++){
            int r = i + row[idx];
            int c = j + col[idx];
            if(r >= 0 && r < n && c >= 0 && c < m && vis[r][c] == 0 && grid[r][c] == '1'){
                solve(r,c,n,m,grid,vis);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    ans++;
                    solve(i,j,n,m,grid,vis);
                }
            }
        }
        return ans;
    }
};
