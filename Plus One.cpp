class Solution {
public:
    
    vector<int> plusOne(vector<int>& digits) {
        int prev=0;
        for(int i=digits.size()-1; i>=0; i--){
            digits[i]++;
            if(digits[i]>=10 && digits.size()>1){
                digits[i]=0;
                if(i==0)
                    digits.insert(digits.begin(), 1);
                continue;
            }
            break;
        }
        if(digits[0]==10){
            digits[0]=0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
