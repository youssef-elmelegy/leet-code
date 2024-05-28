class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int med = ((right - left)/2) + left;
        while (left <= right) {
            if (target == nums[med])return med;
            else if (target > nums[med]) left = med + 1;
            else right = med - 1;
            med = ((right - left)/2) + left; 
        }
        return med ;
    }
};