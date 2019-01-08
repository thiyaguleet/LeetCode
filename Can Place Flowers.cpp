class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        if(flowerbed.size()==2){
            if(n>1) return false;
            if(flowerbed[1]!=1 && flowerbed[0]!=1) return true;
        }
        if(flowerbed.size()>2){
            if(flowerbed[0]!=1 && flowerbed[1]!=1) {
                n--;
                flowerbed[0]=1;
            }
        }
        for(int i=1; i<flowerbed.size()-1; i++){
            if(flowerbed[i]!=1 && flowerbed[i+1]!=1 && flowerbed[i-1]!=1){
                flowerbed[i]=1;
                n--;
            }
            if(n==0) return true;
        }
        int m=flowerbed.size();
        if(flowerbed[m-1]!=1 && flowerbed[m-2]!=1) {
            flowerbed[m-1]=1;
            n--;
            if(n==0) return true;
        }
        return false;
    }
};
