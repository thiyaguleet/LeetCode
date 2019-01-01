class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        unsigned int tmp = num > 0 ? num : UINT_MAX + num + 1;
        string res;
        while(tmp)
        {
            int i = tmp % 16;
            char c;
            if(i <= 9)
                c = '0' + i;
            else
                c = 'a' + i - 10;
            res = c + res;
            tmp /= 16;
        }
        return res;
    }
};
