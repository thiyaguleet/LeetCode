class Solution {
public:
    int digits_sum(int num){
        int sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        if (num==0) return 0;
        int sum=digits_sum(num);
        while(sum/10>0){
            sum=digits_sum(sum);
        }
        return sum;
    }
};

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
