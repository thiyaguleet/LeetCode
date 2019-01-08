class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change=0, change2=0;
        for(auto i :bills){
            if(i==5) change++;
            else if(i==10) {
                change2++;
                change--;
            }
            else if(i==20) {
                if(change2>0) {
                    change--;
                    change2--;
                }
                else change=change-3;
            }
            if(change<0) return false;
        }
        return true;
    }
};
