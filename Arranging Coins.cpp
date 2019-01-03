class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n-i>=0){
            n-=i;
            i++;
        }
        return i-1;
    }
};

class Solution {
public:
    /// return true if the total number of coins on all levels exceeds n
    bool exceeds(long levels, long n) {
        long total = levels*(levels+1) / 2;
        return total > n;
    }
    
    int arrangeCoins(int n) {
        if (n < 1)
            return 0;
        long lo = 0;
        long hi = long(n)+1;
        while (lo < hi) {
            long levels = lo + (hi-lo) / 2;      
            if (exceeds(levels, n)) hi = levels;
            else lo = levels + 1;
        }
        return lo-1;
    }
};
