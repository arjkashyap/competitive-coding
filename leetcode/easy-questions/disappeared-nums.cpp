// For a given array of n elements
// Each element x :   1<=x<=n
// Some elements are repeated twice, others not.
// Find the missing


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            int index = (nums[i] < 0) ? (-1*nums[i]) - 1 : nums[i] - 1;
            if(nums[index] > 0)
                nums[index] = -1*nums[index];
        }
        
        for(int i = 0; i < n; i++)
            if(nums[i] > 0)
                res.push_back(i+1);
        return res;
    }
};
