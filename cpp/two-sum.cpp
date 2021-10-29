class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        vector<int> ans(2);
        for(int i = 0; i < nums.size(); ++i) hash[nums[i]] = i+1;
        for(int i = 0; i < nums.size(); ++i){
            if(hash[target-nums[i]] > 0 && hash[target-nums[i]]-1 != i){
                ans = {i,hash[target-nums[i]]-1};
                //cout << i << hash[target-nums[i]]-1;
                break;
            }
        }
        return ans;
    }
};
