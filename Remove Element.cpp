class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int start=0, end=nums.size()-1;
        if(!nums.size()) return 0;
        while(start<nums.size()){
            if(nums[start]==val){
                nums[start]=nums[nums.size()-1];
                nums.pop_back();
            }
            else 
            start++;
        }
        return nums.size();
    }
};
