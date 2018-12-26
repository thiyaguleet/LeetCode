class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1=INT_MIN, max2=INT_MIN, index;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]>=max2){
                if(nums[i]>=max1) {max2=max1; max1=nums[i];index=i;}
                else max2=nums[i];
            }
        }
        if(max1>= 2*max2){
            return index;
        }
        return -1;
    }
};
