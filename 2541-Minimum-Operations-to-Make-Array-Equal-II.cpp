class Solution {
public:
long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
long long cnt1 = 0, cnt2 = 0;
if (k == 0) {
        for (int i = 0; i < nums1.size(); i++) {
            if (nums2[i] != nums1[i]) return -1;
        }
        return 0;
}
for ( int i = 0; i < nums1.size(); i++ )
    {
        if ( (nums1[i] - nums2[i]) % k != 0  )
            return -1 ;
        if (nums1[i] > nums2[i] )
            cnt1 += (nums1[i] - nums2[i]);
        
        else if (nums1[i] < nums2[i])
            cnt2 += (nums2[i] - nums1[i]);
    }
    if (cnt1 == cnt2 )
        return cnt1 /k ;
    else
        return -1 ;


}
};