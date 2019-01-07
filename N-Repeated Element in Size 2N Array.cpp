class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> table;
        for(auto i:A) {
            table[i]++;
            if(table[i]==A.size()/2) return i;
        }
    }
};

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for(int i = 0; i < A.size(); i++){
            for (int n = i+1; n < A.size(); n++){
                if (A.at(i) == A.at(n)){
                    return A.at(i);
                }
            }
        }
    }
};
