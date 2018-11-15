class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> output1, output2;
        for(auto i=A.begin(); i!=A.end();++i)
            if(*i%2==0) output1.push_back(*i);
            else output2.push_back(*i);
        output1.insert(output1.end(), output2.begin(), output2.end());
        return output1;
    }
};
