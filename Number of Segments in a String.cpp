class Solution {
public:
    int countSegments(string s) {
        int out=0;
        if(s[0]!=' ') out++;
        if(s.empty()) return 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                while(s[i]==' '){
                    i++;
                }
                if(i==s.length()) return out;
                out++;
            }
        }
        return out;
    }
};
