class Solution {
public:
    string reverseString(string s) {
        string t=s;
        int n = s.length();
        for(int i=0; i<n; i++)
            t[i]=s[n-i-1];
        return t; 
    }
};
