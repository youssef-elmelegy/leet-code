class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0;
        int prfix = 0;
        for (int i : nums) {
            prfix += i;

            int temp = prfix % k;
            if (temp < 0) 
                temp += k;
            
            if (mp.find(temp) != mp.end()) {
                count += mp[temp];
                mp[temp]++;
            } else {
                mp[temp] = 1;
            }

        }
        return count;
    }
}; 