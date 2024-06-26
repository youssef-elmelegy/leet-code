class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int , int> f;
        // for (int i : nums) {
        // }
        int count = 0;
        for (int i : nums) {
            if (f.count(i-k)){
                count += f[i-k];
            } if (f.count(i+k)) {
                count += f[i+k];
            }
            f[i]++;
        }
        return count;
    }
};