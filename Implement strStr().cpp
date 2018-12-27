class Solution {
public:
    int strStr(string haystack, string needle) {
        int window=needle.length();
        if (window==0) return 0;
        for(int i=0; i<haystack.length();i++){
            if(haystack.substr(i, window)==needle) return i;
        }
        return -1;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int needlelength = needle.length();
        int haystacklength = haystack.length();
      
        if (haystacklength<needlelength)
            return -1;
        
        if (needlelength == 0)
            return 0;
        
        if (haystack.find(needle) != -1)
            return haystack.find(needle);
        
        return -1;
    }
};
