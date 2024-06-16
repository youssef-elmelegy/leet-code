class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long sum = 1;
        int count = 0;
        int i = 0;

        while (sum <= n) {
            if (i < nums.size() && sum >= nums[i]) {
                sum += nums[i];
                i++;
            } else {
                sum += sum;
                count++;
            }
        }
        return count;
    }
};