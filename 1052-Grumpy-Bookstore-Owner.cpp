class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        long long sum = 0;
        vector<int> a1(customers.size());
        vector<int> a2(customers.size() - minutes + 1);
        int max = 0;

        a1[0] = customers[0] * grumpy[0];
        if (!grumpy[0]) sum += customers[0];
        for (int i = 1; i < customers.size(); i++) {
            a1[i] = a1[i-1]+ (customers[i] * grumpy[i]);
            if (!grumpy[i]) sum += customers[i];
        }

        a2[0] = a1[minutes - 1];
        max = a2[0];
        for (int i = minutes; i < customers.size(); i++) {
            a2[i - minutes + 1] = a1[i] - a1[i - minutes];
            max = (a2[i - minutes + 1] > max) ? a2[i - minutes + 1] : max;
        }

        sum += max;
        return sum;
    }
};