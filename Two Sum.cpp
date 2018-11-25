class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> diff;
        for(int i=0; i<nums.size(); i++){
            auto iter=diff.find(nums[i]);
            if(iter!=diff.end())
                return vector<int> {i, iter->second};
            else
                diff[target-nums[i]]=i;
        }
    }
};
