class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-2;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1, k = n - 1;
            while(j < k){
                int tar = 0 - nums[i];
                if(nums[i] + nums[j] + nums[k] == 0){ 
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;k--;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(k > j && nums[k] == nums[k+1]) k--;
                }
                else if(nums[j] + nums[k] > tar) k--;
                else j++;
            }
        }
        return ans;
    }
};
