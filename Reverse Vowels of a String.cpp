class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        vector<int> ref;
        for(int i=0; i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                ref.push_back(i);
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                ref.push_back(i);
        }
        int n1=ref.size();
        for(int i=0; i<n1/2;i++){
            swap(s[ref[i]],s[ref[n1-i-1]]);
        }
        return s;
    }
};
