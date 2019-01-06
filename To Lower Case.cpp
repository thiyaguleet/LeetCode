class Solution {
public:
    string toLowerCase(string str) {
        int  m=str.size();
        for(int i=0;i<m;i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]+='a'-'A';
            }
        } 
        return str;
    }

};
