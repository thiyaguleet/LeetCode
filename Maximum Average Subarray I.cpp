class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long double sum=0, max_=INT_MIN, temp=0;
        int n=nums.size();
        vector<long double> sums(n+1);
        sums[0]=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            sums[i+1]=sum;
        }
        if(n==k)
            return sum/k;
        for(int i=0; i<=n-k; i++){
            temp=sums[i+k]-sums[i];
            max_=max(temp, max_);
        }
        return double(max_/double(k));
    }
};
