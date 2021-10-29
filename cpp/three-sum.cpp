class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > 0) return ans; 
            int a;
            if(i > 0 && a == nums[i]) continue;
            a = nums[i];
            for(int j = i+1, k = nums.size()-1; j < k; ){
                int b = nums[j], c = nums[k];
                if(a+b+c == 0){
                    ans.push_back({a,b,c});
                    while(j < k && b == nums[j]) ++j;
                    while(j < k && c == nums[k]) --k;
                }
                else if(a+b+c > 0){
                    --k;
                }
                else{
                    ++j;
                }
            }
        }
        return ans;
    }
};
