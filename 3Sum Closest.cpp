class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i, j, k;
        int out;
        int n = nums.size(), count=0;
        sort(nums.begin(), nums.begin()+n);
        out=nums[0]+nums[1]+nums[2];
        for(i=0; i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                if(abs(target-(nums[i]+nums[j]+nums[k]))<abs(target-out)){
                    out=nums[i]+nums[j]+nums[k];
                }
                if(nums[i]+nums[j]+nums[k]<target) j++;
                else k--;
            }
        }
        return out;
    }
};
