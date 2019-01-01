class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y, digits=0;
        while(z>0){
            digits+=z&1;
            z=z>>1;
        }
        return digits;
    }
};
