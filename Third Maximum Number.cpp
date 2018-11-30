class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first=INT_MIN, second=INT_MIN, third=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>first) {third=second; second=first; first=nums[i];}
            else if(nums[i]<first && nums[i]>second) {third=second; second=nums[i];}
            else if(nums[i]<second && nums[i]>third) third=nums[i];
        }
        if(second==INT_MIN) return first;
        if(third==INT_MIN) {
            if (find(nums.begin(),nums.end(), third)!=nums.end()) return third;
            return first;
        }
        return third;
    }
};
