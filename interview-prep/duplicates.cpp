class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        if(nums.empty()) return false;
        for(auto x : nums){
            if(s.find(x) != s.end()) return true;
            s.insert(x);
        }
        return false;
    }
};