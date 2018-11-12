class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1;
        double product=1;
        if(n>0){
            for (int i=0; i<n;i++){
                product*=x;
            }
        return product;
        }
        for (int i=0; i<(-1*n);i++)
            product*=(1/x);
        return product;
    }
};
