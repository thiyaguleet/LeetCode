class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0,length=nums.size();
        for (int i=0; i<length;i++){
            if(nums[i]==0) {
                nums.erase(nums.begin() + i);
                count++;
                length--; i--;
            }  
        }
        for(int i=0; i<count;i++)
            nums.push_back(0);
    }
};
