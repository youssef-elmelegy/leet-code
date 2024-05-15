class Solution {
public:
int romanToInt(string s) {
    unordered_map<char, int> m = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int sum = 0;
    int length = s.length();

    for (int i = 0; i < length; ++i) {
        int temp = m[s[i]];

        if (i + 1 < length && m[s[i + 1]] > temp) {
            sum -= temp;
        } else {
            sum += temp;
        }
    }

    return sum;
}
};