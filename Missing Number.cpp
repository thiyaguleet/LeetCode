class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto i: nums) sum+=i;
        return n*(n+1)/2 - sum;
        
        int missing=nums.size();
        for(int i=0; i<nums.size();i++) missing^=i^nums[i];
        return missing;
    }
};
