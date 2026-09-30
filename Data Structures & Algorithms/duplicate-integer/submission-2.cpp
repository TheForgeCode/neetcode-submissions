class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp(nums.begin(), nums.end());

        if(temp.size() != nums.size()) return true;
        return false;
    }
};