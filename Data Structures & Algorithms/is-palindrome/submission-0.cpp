class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto &it: s){
            if(it >= 'a' && it <= 'z' || it >= 'A' && it <= 'Z' || it >= '0' && it <= '9'){
                if(it >= 'A' && it <= 'Z'){
                    temp += (it - 'A' + 'a');
                }
                else{
                    temp += it;
                }
            }
        }
        string ans = temp;
        reverse(ans.begin(),ans.end());
        return temp == ans;
    }
};
