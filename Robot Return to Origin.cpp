class Solution {
public:
    bool judgeCircle(string moves) {
        int up_down=0, right_left=0;
        for(int i=0; i<moves.length();i++){
            if(moves[i]=='U') up_down++;
            else if(moves[i]=='D') up_down--;
            else if(moves[i]=='L') right_left--;
            else right_left++;
        }
        if(up_down==0 && right_left==0) return true;
        return false;
    }
};
