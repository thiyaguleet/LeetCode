class Solution {
public:
    int rev(int num){
        int final=0;
        while(num>0){
            final=(final*10)+(num%10);
            num/=10;
        }
        return final;
    }
    bool isPalindrome(int x) {
                if (x < 0)
        {
            return false;
        }
        
        if (x < 10)
        {
            return true;
        }
        
        if (x % 10 == 0)
        {
            return false;
        }
        
        int num=rev(x);
        if(x==num)
            return true;
        return false;
    }
};
