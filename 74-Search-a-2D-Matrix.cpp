class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size()-1;
        int med;
        while (l<=r) {
            med = (r-l)/2 + l;
            if (matrix[med][0] <= target && matrix[med].back() >= target) {
                break;
            } else if (matrix[med][0] < target) {
                l = med +1;
            } else if(matrix[med][0] > target){
                r = med -1;
            }
        }
        // cout << med;
        l = 0, r = matrix[med].size() - 1;
        int md;
        while (l <= r) {
            md = (r-l)/2 + l;
            if (matrix[med][md] == target) {
                return true;
            } else if (matrix[med][md] < target) {
                l = md + 1;
            } else {
                r = md -1;
            }
        }
        // cout << md;
        return false;
    }
};