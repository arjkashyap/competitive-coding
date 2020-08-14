class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < n; i++)
            mp[nums[i]].push_back(i);
        
        int l = 0, r = n -1;
        
        sort(nums.begin(), nums.end());
        // 2 pointer
        while(l != r){
            int s = nums[l] + nums[r];
            if( s == target ){
                // same numbers on diff pos
                if(nums[l] == nums[r]){
                    res.push_back(mp[nums[l]][0]);
                    res.push_back(mp[nums[l]][1]);
                }
                else{
                    res.push_back(mp[nums[l]][0]);
                    res.push_back(mp[nums[r]][0]);
                }
                return res;
            }
            else if( s > target ) r--;
            else if( s < target ) l++;
        }
        
        return res;
    }
};