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


class Solution {
public:
    string reverseString(string s) {
        string t=s;
        int start=0, end = s.length()-1;
        while(start<=end){
            swap(t[start], t[end]);
            start++; end--;
        }
        return t; 
    }
};
