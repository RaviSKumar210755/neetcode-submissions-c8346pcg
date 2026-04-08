class Solution {
    void solve(int idx, int n, vector<int> &nums, vector<vector<int>> &ans, vector<int> &store, int tar){
        if(idx >= n || tar < 0){
            return;
        }
        //if(dp[idx][tar] != -1) return dp[idx][tar];

        if(tar == 0){
            ans.push_back(store);
            return;
        }

        solve(idx + 1, n, nums, ans, store, tar);
        if(tar >= nums[idx]){
            store.push_back(nums[idx]);
            solve(idx,n,nums,ans,store,tar - nums[idx]);
            store.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int tar) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> store;
        //vector<vector<int>> dp(n,vector<int>(tar+1,-1));
        solve(0, n, nums, ans, store, tar);
        return ans;
    }
};
