class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0] > 0 && target <= 0) return ans;
        if(nums[n-1] <= 0 && target > 0) return ans;
        for(int i = 0; i < n-3; ){
            int a = nums[i];
            for(int j = i+1; j < n-2; ){
                int b = nums[j];
                for(int k = j+1, l = n-1; k < l; ){
                    int c = nums[k], d = nums[l];
                    int sum = a+b+c+d;
                    if(sum == target){
                        ans.push_back({a,b,c,d});
                        while(k < l && c == nums[k]) ++k;
                        while(k < l && d == nums[l]) --l;
                    }
                    else if(sum > target){
                        --l;
                    }
                    else{
                        ++k;
                    }
                }
                while(j < n-2 && b == nums[j]) ++j;
            }
            while(i < n-3 && a == nums[i]) ++i;
        }
        return ans;
    }
};
