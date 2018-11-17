class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);
        for(char c:s)
            ++count[c-'a'];
        for(int j=0; j<s.length();j++){
            if(count[s[j]-'a']==1)
                return j;
        }
        return -1;
    }
};
