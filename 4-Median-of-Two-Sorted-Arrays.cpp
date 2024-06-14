class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ne;
        for (int i = 0; i < nums1.size(); i++) {
            ne.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            ne.push_back(nums2[i]);
        }

        sort(ne.begin(), ne.end());

        int si = ne.size();

        if (si % 2 != 0)
            return ne[si/2];
        else 
            return (ne[si/2] + ne[si/2 -1])/2.0;

    }
};