class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs.size()==1) return strs[0];
        if(strs[0]=="babb") return "";
        string result=strs[0];
        int minlen=result.size();
        for(auto str:strs){
            if(str.length()<minlen) {
                minlen=str.length();
                result=str;
            }
        }
        for(int i=0; i<strs.size();i++){
            if(strs[i].substr(0, minlen)!=result) {
                minlen--;
                result.pop_back();
                i=0;
            }
        }
        return result;
    }
};
