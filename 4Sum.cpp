class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        std::sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++) {
            // after the first iteration, we can skip the equal values
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for (int j = i+1; j < nums.size(); j++) {
                // same as i, to avoid duplicates
                if (j > i+1 && nums[j] == nums[j-1]) continue;
                int l = j+1, r = nums.size()-1;
                
                while (l < r) {
                    int s = nums[i] + nums[j] + nums[l] + nums[r];
                    if (s < target)
                        l++;
                    else if (s > target)
                        r--;
                    else {
                        res.push_back(vector<int> {nums[i],nums[j],nums[l],nums[r]});
                        while (nums[l+1] == nums[l]) l++;
                        while (nums[r-1] == nums[r]) r--;
                        l++; r--;
                    }
                        
                    
                }
            }
        }
        return res;
    }
};
