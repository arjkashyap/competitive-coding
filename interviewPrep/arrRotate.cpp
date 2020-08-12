class Solution {
public:
    
    void helper(vector<int>& arr, int l, int r)
    {
          while(l <= r){
            cout << l << " " << r << endl;
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
    
    void rotate(vector<int>& nums, int k) 
    {
        if( nums.empty()) return;
        if(nums.size() == 1) return;
        k = k%nums.size();
        helper(nums, nums.size() - k , nums.size() - 1);
        helper(nums, 0, nums.size() - k - 1);
        helper(nums, 0, nums.size()-1);
    }
};