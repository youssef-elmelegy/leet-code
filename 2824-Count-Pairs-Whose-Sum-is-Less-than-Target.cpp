class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        long long count = 0;
        // for (int i = 0; i < nums.size()-1; i++){
            int l = 0, r = nums.size()-1;
            while (l < r) {
                if (nums[l] + nums[r] >= target) {
                    r--;
                } else {
                    // r--;
                    count+= r-l;
                    l++;
                }
            }
        // }
        return count;
    }
};