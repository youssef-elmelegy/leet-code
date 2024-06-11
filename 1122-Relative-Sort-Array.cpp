class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> table;
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < arr1.size(); i++) {
            table[arr1[i]]++;
        }
        vector<int> res;
        for (int i = 0; i < arr2.size(); i++) {
            while (table[arr2[i]]) {
                res.push_back(arr2[i]);
                table[arr2[i]]--;
            }
        }
        for (int i = 0; i < arr1.size(); i++){
            if (table[arr1[i]] != 0){
                while (table[arr1[i]]) {
                    res.push_back(arr1[i]);
                    table[arr1[i]]--;
                }
            }
        }
        return res;
    }
};