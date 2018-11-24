class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, j, k;
        vector<vector<int>> out;
        int n = nums.size(), count=0;
        sort(nums.begin(), nums.begin()+n);
        for(i=0; i<n-2;i++){
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            j=i+1;
            k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    out.push_back(vector<int> {nums[i],nums[j],nums[k]});
                    while(nums[j]==nums[j+1]) j++;
                    while(nums[k]==nums[k-1]) k--;
                    j++;k--;
                }
                else if (nums[i]+nums[j]+nums[k]<0)
                    j++; 
                else
                    k--;
            }
        }
        return out;
    }
};
