class Solution {
public:
    //Find the first element higher than the current element, push the elements in between to the stack 
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> out(T.size(),0);
        stack<int> stck;
        for(int i=0; i<T.size(); i++){
            if(stck.empty() || T[stck.top()]>T[i]) stck.push(i);
            else{
                while(stck.size() && T[stck.top()]<T[i]){
                    out[stck.top()]=i-stck.top();
                    stck.pop();
                }
                stck.push(i);
            }
        }
        return out;
    }
};
