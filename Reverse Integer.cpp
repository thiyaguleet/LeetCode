class Solution {
public:
    int reverse(int x) {
        int num=0, rem;
        if(x>=0){
            while (x>0){
                if(num>INT_MAX/10) return 0;
                rem=x%10;
                num=num*10+rem;
                x/=10;
            }
            return num;
        }
        else{
            x=-1*x;
            while (x>0){
                if(num>INT_MAX/10) return 0;
                rem=x%10;
                num=num*10+rem;
                x/=10;
            }
            return (-1*num);
        }
    }
};
