class Solution {
public:
    int helper(vector<int> & nums, int low, int high){
        int mid=(low+high)/2;
        if(nums[mid+1] && nums[mid-1]){
            if(nums[mid+1]<nums[mid] && nums[mid]>nums[mid-1]) return mid;
        }
        if(nums[mid]>nums[mid+1]) return helper(nums, low, mid-1);
        else return helper(nums, mid+1, high);
    }
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return 0;
        if(nums[n-2]<nums[n-1]) return n-1;
        if(nums[0]>nums[1]) return 0;
        int low=0, high=nums.size(), mid;
        return helper(nums, low, high-1);
    }
};
