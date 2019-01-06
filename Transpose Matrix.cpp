class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> B(A[0].size(), vector<int>(A.size()));   
        for(int m = 0; m < A[0].size(); m++){
            for(int n = 0; n < A.size(); n++){
                B[m][n] = A[n][m];
            }
        }
        return B;
    }
};
