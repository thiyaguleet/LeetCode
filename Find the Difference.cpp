class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0, sum2=0;
        for(auto i:s) sum1+=i;
        for(auto i:t) sum2+=i;
        return sum2-sum1;
    }
};
