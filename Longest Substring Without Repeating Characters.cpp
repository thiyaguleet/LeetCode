// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         if(!s.length()) return 0;
//         unordered_map<char, int> pos;
//         int start=0, maxlen=0, currlen=0, st=0, i;
//         pos[s[0]]=0;
//         for(i=1; i<s.length(); i++){
//             if(pos.find(s[i])==pos.end()) pos[s[i]]=i;
//             else{
//                 if(pos[s[i]]>=st){
//                     currlen=i-st;
//                     if(maxlen<currlen){
//                         maxlen=currlen;
//                         start=st;
//                     }
//                     st=pos[s[i]]+1;
//                 }
//                 pos[s[i]]=i;
//             }
//         }
//         if (maxlen < i - st) { 
//         maxlen = i - st; 
//         start = st; 
//         } 
//         return s.substr(start, maxlen);
//     }
// };

class Solution{
    public:
      int lengthOfLongestSubstring(string s){
          if(!s.length()) return 0;
          unordered_map<char, int> pos;
          int i, currlen=1, maxlen=1;
          pos[s[0]]=0;
          for(i=1; i<s.length();i++){
              if(pos.find(s[i])==pos.end() || i-currlen>pos[s[i]]) {
                  currlen++;
              }
              else {
                  maxlen=max(maxlen, currlen);
                  currlen=i-pos[s[i]];
              }
              pos[s[i]]=i;
          }
          return max(maxlen, currlen);
      }
};
