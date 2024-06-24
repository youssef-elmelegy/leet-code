class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int>f;
        for (char i : stones) {
            f[i]++;
        }
        int count =0;
        for (char i : jewels) {
            count += f[i];
        }
        return count;
    }
};