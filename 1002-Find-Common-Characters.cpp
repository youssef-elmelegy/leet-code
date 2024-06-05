class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;
        for (char ch : words[0]) {
            f1[ch]++;
        }

        for (int i = 1; i < words.size(); i++) {
            for (char ch : words[i]) {
                f2[ch]++;
            }
            for (auto& pair : f1) {
                pair.second = min(pair.second, f2[pair.first]);
                f2[pair.first] = 0;
            }
        }

        vector<string> res;
        for (const auto& pair : f1) {
            for (int i = 0; i < pair.second; i++) {
                res.push_back(string(1, pair.first));
            }
        }
        return res;

    }
};