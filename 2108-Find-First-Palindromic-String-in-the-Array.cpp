class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            int right = 0, left = s.length()-1;
            bool flag = true;
            while (right <= left){
                if (s[right] != s[left]){
                    flag = false;
                    break;
                }
                right++;
                left--;
            }
            if (flag) {
                return s;
            }
        }
        return "";
        
    }
};