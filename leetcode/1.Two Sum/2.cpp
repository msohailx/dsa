class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashmap;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(hashmap.find(complement) != hashmap.end()){
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
