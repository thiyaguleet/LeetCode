class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size(),sum=0,temp=0;
        for(int i:nums) sum+=i;
        for(int i=0;i<size;i++) {
            if(temp*2==sum-nums[i]) return i; 
            temp+=nums[i];
        }
        return -1;     
    }
};
