class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(dict.count(diff)) return {dict[diff], i};
            else dict[nums[i]]=i;
        }
        return {-1,-1};
    }
};