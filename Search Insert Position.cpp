int x = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  return 0;
}();


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<high){
            int middle=(low+high)/2;
            if(nums[middle]==target) return middle;
            else if(target<nums[middle])
                high=middle-1;
            else if(target>nums[middle])
                low=middle+1;
        }
        if(nums[low]<target) return low+1;
        return low;
    }
};
