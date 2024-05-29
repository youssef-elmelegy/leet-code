class Solution {
public:
    int numSteps(string s) {
        int val = 0;
        int count = 0;
        for (int i = s.length()-1; i > 0; i--){
            if (s[i] + val =='1') {
                val = 1;
                count += 2;
            } else {
                count += 1;
            }
        }

        return count + val;
    }
};