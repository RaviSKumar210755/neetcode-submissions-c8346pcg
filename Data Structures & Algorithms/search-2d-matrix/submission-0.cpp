class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size();
        int m = mat[0].size();
        int len = m * n;
        int low = 0, high = len - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(mat[mid / m][mid % m] == tar) return true;
            else if(mat[mid / m][mid % m] > tar) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};
