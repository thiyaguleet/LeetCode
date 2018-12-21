class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r=nums.size()-1, mid;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) if(nums[0]<nums[1]) return nums[0]; else return nums[1];
        while(l<r){
            mid=l+(r-l)/2;
            if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) return nums[mid];
            else if(nums[mid]>=nums[l] && nums[mid]>=nums[r])  l=mid+1;
            else if(nums[mid]<=nums[r]) r=mid-1;
        }
        return nums[l];
    }
};
