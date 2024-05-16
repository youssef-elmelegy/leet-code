class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int pos = n - 1;
        
        while (left <= right) {
            int leftp = nums[left] * nums[left];
            int rightp = nums[right] * nums[right];
            if (leftp > rightp) {
                result[pos] = leftp;
                left++;
            } else {
                result[pos] = rightp;
                right--;
            }
            pos--;
        }
        
        return result;
    }
};