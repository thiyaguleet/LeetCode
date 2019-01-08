class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> ref;
        int n=nums.size();
        for(int i=0; i<n; i++){
            ref[nums[i]]++;
            if(ref[nums[i]]>2){
                int temp=nums[i];
                nums.erase(nums.begin()+i);
                nums.push_back(temp);
                n--;i--;
            }
        }
        return n;
    }
};
