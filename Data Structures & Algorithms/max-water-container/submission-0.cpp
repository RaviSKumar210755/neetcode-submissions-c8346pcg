class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int i = 0, j = n - 1;
        while(i < j){
            if(nums[i] <= nums[j]){
                int sum = (j - i) * nums[i];
                ans = max(ans,sum);
                i++;
            }
            else{
                int sum = (j - i) * nums[j];
                ans = max(ans,sum);
                j--;
            }
        }
        return ans;
    }
};
