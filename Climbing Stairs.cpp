class Solution {
public:
    int climbStairs(int n) {
        vector<int> res(n);
        if(n==2)
            return 2;
        else if(n==1)
            return 1;
        else if(n==0)
            return 0;
        res[0]=1;
        res[1]=2;
        int i=2;
        for(i=2; i<n;i++){
            res[i]=res[i-1]+res[i-2];
        }
        return res[n-1];
    }
};
