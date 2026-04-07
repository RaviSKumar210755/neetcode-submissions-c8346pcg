class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> vis(26,0);
        vector<int> temp(26,0);
        for(auto &it:s1) vis[it - 'a']++;
        int m = s1.size();
        int n = s2.size();
        if(m > n) return false;
        for(int i = 0;i<m-1;i++) temp[s2[i] - 'a']++;
        int j = 0;
        for(int i = m-1;i<n;i++){
            temp[s2[i] - 'a']++;
            if(temp == vis) return true;
            temp[s2[j] - 'a']--;
            j++;
        }
        return false;
    }
};
