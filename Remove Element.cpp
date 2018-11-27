static const auto io_sync_off = []()  {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0; i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
