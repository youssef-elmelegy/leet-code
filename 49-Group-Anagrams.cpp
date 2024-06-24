class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> f;
        for (string str : strs) {
            string str2 = str;
            sort(str.begin(), str.end());
            f[str].push_back(str2);
        }
        vector<vector<string>> res;
        for (auto& pair : f) {
            res.push_back(pair.second);
        }
        return res;

    }
};
