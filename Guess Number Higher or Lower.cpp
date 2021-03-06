// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low=0, high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            int num=guess(mid);
            if(num==1) low=mid+1;
            else if(num==-1) high=mid-1;
            else return mid;
        }
        return 0;
    }
};
