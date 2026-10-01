class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashh;

        for(int i=0; i<nums.size(); i++){
            hashh[nums[i]] = i;
        }

        for(int j=0; j<nums.size(); j++){
            int temp = target - nums[j];
            if(hashh.find(temp) != hashh.end()){
                int i = hashh[temp];
                if(i == j) continue;
                return {j, i};
            }
        }
    }
};
