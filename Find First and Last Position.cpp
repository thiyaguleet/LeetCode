class Solution {
public:
    int search(vector<int> & nums, int target, int l, int r){
        if(l>r) return -1;
        int mid=l+(r-l)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return search (nums, target, mid+1, r);
        else return search(nums, target, l, mid-1);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int index=search(nums, target, 0, nums.size()-1);
        if(index==-1) return vector<int> {-1,-1};
        int low=index, high=index;
        while(nums[index]==nums[low]) low--;
        while(nums[index]==nums[high]) high++;
        if(low<0) low=-1;
        if(high>nums.size()) high=nums.size();
        return vector<int>{++low, --high};
    }
};
