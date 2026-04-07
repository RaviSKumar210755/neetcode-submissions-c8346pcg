class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (n,0);
        int ct = 0;
        int prod = 1;
        int idx = -1;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                idx = i;
                ct++;
            }else{
                prod *= nums[i];
            }
        }
        if(ct > 1) return ans;
        else if(ct == 0){
            for(int i = 0;i<n;i++){
                ans[i] = prod / nums[i];
            }
        }
        else{
            ans[idx] = prod;
        }
    return ans;
    }
};
