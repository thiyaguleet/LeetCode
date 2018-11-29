class NumArray {
public:
    vector<int> sums;
    NumArray(vector<int> nums) {
        int s=0;
        sums.push_back(s);
        for(int x:nums){
            s+=x;
            sums.push_back(s);
        }
    }
    
    int sumRange(int i, int j) {
        return sums[j+1]-sums[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
