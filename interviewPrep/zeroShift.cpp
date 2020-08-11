class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
        int n = nums.size();
        for(auto x : nums) 
            if( x == 0)
                zeroCount++;
        
        vector<int> helper;
        for(auto x : nums)
            if(x != 0)
                helper.push_back(x);
        
        int i = 0;
        while(i < helper.size()){
            nums[i] = helper[i];
            i++;
        }
        
        while(i < n){
            nums[i] = 0;
            i++;
        }
        
        
    }
};