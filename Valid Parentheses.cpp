class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        if(s.empty()) return true;
        if(s.length()<2) return false;
        for(auto c:s){
            if(c=='(' || c=='{' || c=='[') stck.push(c);
            else if(stck.empty()) return false;
            else if(c==')'){
                if(stck.top()=='('){
                    stck.pop();
                    continue;
                }
                else return false;
            }
            else if (c=='}'){
                if(stck.top()=='{'){
                    stck.pop();
                    continue;
                }
                else return false;
            }
            else if (c==']'){
                if(stck.top()=='['){
                    stck.pop();
                    continue;
                }
                else return false;
            }
        }
        return stck.empty();
    }
};
