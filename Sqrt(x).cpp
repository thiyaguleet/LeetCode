class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        int low=0, high=x/2+1, mid, ans;
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid==x/mid) return mid;
            if(mid<x/mid) {
                low=mid+1;
                ans=mid;
            }
            else high=mid-1;
        }
        return ans;
    }
};
