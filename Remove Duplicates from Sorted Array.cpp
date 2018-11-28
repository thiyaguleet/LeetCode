static const auto io_sync_off = []()  {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (nums.size()==0) return 0;
        if (nums.size()==1) return 1;
        int i=0;
        for(i =0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i+1);
                n--;
                i--;
            }
        }
        return nums.size();
    }
};
