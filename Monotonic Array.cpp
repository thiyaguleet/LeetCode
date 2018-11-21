class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int prev=A[0];
        int j;
        bool dir;
        for(j = 0; j<A.size(); j++){
            if(A[j]==A[j+1]){
                prev=A[j+1];
                continue;
            }
            else
                prev=A[j];
            if(A[j]>A[j+1])
                dir=false;
            else
                dir=true;
            break;
        }
        for(int i = j+1 ; i<A.size(); i++){
            if(dir){
                if(prev<=A[i])
                    prev=A[i];
                else
                    return false;
            }
            else
                if(prev>=A[i])
                    prev=A[i];
                else
                    return false;
        }
        return true;
    }
};
