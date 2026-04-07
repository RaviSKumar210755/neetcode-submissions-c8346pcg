class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 1;
        int ct = 1;
        int i = 0, j = 1;
        int n = nums.size();
        if(n == 0) return 0;
        while(j < n){
            if(nums[j] == nums[j-1]){
                j++;
                continue;
            }
            if(nums[j] == nums[j-1] + 1){
                ct++;
            }
            else{
                ct = 1;
            }
            j++;
            ans = max(ans,ct);
        }
        return ans;
    }
};
