class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<1) return false;
        if (num==1) return true;
        int low=0, high=num;
        while(low<=high){
            long int mid=(low+high)/2;
            long long int temp=mid*mid;
            if(temp==num) return true;
            else if(temp<num) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};
