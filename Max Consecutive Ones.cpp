class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, max=0;
        for (auto i=nums.begin(); i!=nums.end();++i){
            if (*i==1) count++;
            else {
                if (count>max)
                    max=count;
                count=0;
            }
        }
        if (max<count) return count;
        return max;
    }
};
