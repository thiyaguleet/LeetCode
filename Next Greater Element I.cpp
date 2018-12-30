class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        unordered_map<int, int> table;
        int i;
        if(!findNums.size()) return vector<int> {};
        vector<int> out(findNums.size());
        // for(i=0; i<nums.size();i++) {
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[j]>nums[i]) {
        //             table[nums[i]]=nums[j];
        //             break;
        //         }
        //     }
        // }
        stack<int> stk;
        stk.push(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            while (!stk.empty() && stk.top() < nums[i]) {
                table[stk.top()] = nums[i];
                stk.pop();
            }
            stk.push(nums[i]);
        }
        for(i=0; i<findNums.size(); i++){
            if(findNums[i]<table[findNums[i]])
                out[i]=table[findNums[i]];
            else out[i]=-1;
        }
        return out;
    }
};
