class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> res(rowSum.size(), vector<int>(colSum.size(), 0));
        int i = 0, j = 0;
        while (i < rowSum.size() && j < colSum.size()) {
            res[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= res[i][j];
            colSum[j] -= res[i][j];

            if (rowSum[i] == 0) {
                i++;
            }
            if (colSum[j] == 0) {
                j++;
            }
        }
        return res;
    }
};