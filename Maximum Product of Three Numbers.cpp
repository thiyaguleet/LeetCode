class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int max_1=nums[n-1]*nums[n-2]*nums[n-3];
        int max_2=nums[0]*nums[1]*nums[n-1];
        return max_1>max_2? max_1:max_2;
        
    }
};

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int MAX1 = INT_MIN, MAX2 = INT_MIN, MAX3 = INT_MIN;
        int MIN1 = INT_MAX, MIN2 = INT_MAX;
        for(const int num:nums){
            if(num > MAX1){
                MAX3 = MAX2;
                MAX2 = MAX1;
                MAX1 = num;
            }else if(num > MAX2){
                MAX3 = MAX2;
                MAX2 = num;
            }else if(num > MAX3){
                MAX3 = num;
            }
            if(num < MIN1){
                MIN2 = MIN1;
                MIN1 = num;
            }else if(num < MIN2){
                MIN2 = num;
            }
        }
        return max(MAX1*MAX2*MAX3, MAX1*MIN1*MIN2);
    }
};
