class Solution {
public:
    int lengthOfLastWord(string s) {
        int res=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!=' ')   res++;
            else if (res>0) break;
        }
        return res;
    }
};
