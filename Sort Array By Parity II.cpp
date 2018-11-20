class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> fin(A.size());
        int even=0, odd=1;
        for(auto i= A.begin(); i!=A.end(); ++i){
            if(*i%2==0){ 
                fin[even]=*i;
                even+=2;
            }
            else {
                fin[odd]=*i;
                odd+=2;
            }
        }
        return fin;
    }
};
