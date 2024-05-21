class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> subsets;

        sub(nums, 0, subset, subsets);
        return subsets;
    }
    void sub(vector<int>& arr, int i, vector<int> subset, vector<vector<int>>& subsets) {
        if (i == arr.size()) {
                subsets.push_back(subset);
                return;
        } else {
                subset.push_back(arr[i]);
                sub(arr, i+1, subset, subsets);
                subset.pop_back();
                sub(arr, i+1, subset, subsets);
        }
    }
};