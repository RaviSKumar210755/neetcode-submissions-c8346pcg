class Solution {
    int row[4] = {-1,0,1,0};
    int col[4] = {0,-1,0,1};

    int solve(int i, int j, int k, int n, int m, int len, vector<vector<char>>& board, string word, vector<vector<int>>& dp){
        if(i < 0 || i >= n || j < 0 || j >= m || dp[i][j]) return 0;
        if(k == len - 1 && word[k] == board[i][j]) return 1;
        if(board[i][j] != word[k]) return 0;
        else{
            dp[i][j] = 1;
            for(int idx = 0;idx < 4;idx++){
            int r = row[idx] + i;
            int c = col[idx] + j;
            if(r >= 0 && r < n && c >= 0 && c < m && dp[r][c] != 1){
                if(solve(r,c,k+1,n,m,len,board,word,dp)) return true;
                }
            }
            dp[i][j] = 0;
        }
        return false;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int k = word.size();
        vector<vector<int>> dp(n, vector<int>(m,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(solve(i,j,0,n,m,k,board,word,dp)) return true;
                }
            }
        } 
        return false;
    }
};
