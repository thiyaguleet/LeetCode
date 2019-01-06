class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> out;
        for(int i=0; i<S.length(); i++){
            if(S[i]==C) out.push_back(0);
            else{
                int val1=INT_MAX, val2=INT_MAX;
                for(int j=i+1; j<S.length(); j++){
                    if(S[j]==C) {val1=j-i; break;}
                }
                for(int j=i-1; j>=0; j--){
                    if(S[j]==C) {val2=i-j; break;}
                }
                out.push_back(min(val1, val2));
            }
        }
        return out;
    }
};

class Solution {
    public:
        vector<int> shortestToChar(string S, char C) {
        vector<int> vec;
        for(int i = 0; i < S.size(); i++){
            if(C == S[i]){
                vec.push_back(i);
            }
        }
        vector<int> shortest_vec;
        for(int j = 0; j < S.size(); j++){
            int distance = abs(j - vec[0]);
            for(int k = 0; k < vec.size(); k++){
                if((abs(j - vec[k])) < distance){
                    distance = abs(j - vec[k]);
                }
            }
            shortest_vec.push_back(distance);
        }
        return shortest_vec;
    }
};
