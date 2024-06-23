class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> f(nums.size());
        int good =0;
        for (int i : nums) {
            f[i]++;
            if (f[i] >= 2) good += f[i]-1;
        }
        return good;
    }
};