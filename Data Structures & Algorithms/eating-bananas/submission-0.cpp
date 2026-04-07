class Solution {
    int solve(vector<int> &nums, int x){
        int n = nums.size();
        int ct = 0;
        for(int i = 0;i<n;i++){
            ct += ceil((double)nums[i] / x);
        }
        return ct;
    }

public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int ans = high;
        while(low <= high){
            int mid = (low + high) / 2;
            if(solve(nums, mid) <= h){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
