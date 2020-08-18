class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int i = 0;
        auto it_nums1 = nums1.begin();
        auto it_nums2 = nums2.begin();

        while(i < m)
        {
            it_nums1++;
            i++;
        }

        while(it_nums2 != nums2.end())
        {
            *it_nums1 = *it_nums2;
            it_nums1++;
            it_nums2++;
        }

        sort(nums1.begin(), nums1.end());
        
    }
};