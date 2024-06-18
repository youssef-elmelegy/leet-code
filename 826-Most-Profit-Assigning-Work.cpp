class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = worker.size();
        sort(worker.begin(),worker.end());
        vector<pair<int,int>> nums(n);

        for(int i=0;i<n;i++)
        {
            nums[i] = {difficulty[i],profit[i]};
        }
        sort(nums.begin(),nums.end());

        int count = 0;
        int temp = 0;
        for(int i=0,j=0;i<n;i++)
        {
            while(j<n && nums[j].first <= worker[i])
            {
                temp = max(nums[j].second,temp);
                j++;
            }
            if(j>0 && nums[j-1].first <= worker[i])
            {
                count = count + temp;
            }
        }
        return count;
    }
};