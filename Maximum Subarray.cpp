class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far=INT_MIN;
        int max_till_here=0;
        for(auto i: nums){
            max_till_here+=i;
            if(max_so_far<max_till_here) max_so_far=max_till_here;
            if(max_till_here<0) max_till_here=0;
        }
        return max_so_far;
    }
};
