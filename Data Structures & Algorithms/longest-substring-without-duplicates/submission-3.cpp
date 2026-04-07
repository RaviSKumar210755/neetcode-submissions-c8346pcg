class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vis(300,0);
        int n = s.size();
        if(n == 0) return 0;
        int ans = 1;
        int i = 0; int j = 1;
        vis[s[0] - 'A']++;
        while(i < j && j < n){
            if(vis[s[j] - 'A']){
                while(i <= j && s[i] != s[j]){
                    vis[s[i] - 'A'] = 0;
                    i++;
                }
                i++;
            }
            else{
                vis[s[j] - 'A']++;
            }
            j++;
            ans = max(ans, j - i);
        }
        return ans;
    }
};
