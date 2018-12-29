class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;
        for(auto s: tokens){
            cout<<s<<" ";
            if(s=="+"){
                int num1, num2;
                num1=stck.top(); stck.pop();
                num2=stck.top(); stck.pop();
                stck.push(num2+num1);
            }
            else if(s=="*"){
                int num1, num2;
                num1=stck.top(); stck.pop();
                num2=stck.top(); stck.pop();
                stck.push(num2*num1);
            }
            else if(s=="-"){
                int num1, num2;
                num1=stck.top(); stck.pop();
                num2=stck.top(); stck.pop();
                stck.push(num2-num1);
            }
            else if(s=="/"){
                int num1, num2;
                num1=stck.top(); stck.pop();
                num2=stck.top(); stck.pop();
                stck.push(num2/num1);
            }
            else
                stck.push(stoi(s));
        }
        return stck.top();
    }
};

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(string token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c;
                if(token == "+") c = a + b;
                else if(token == "-") c = b - a;
                else if(token == "*") c = a * b;
                else c = b / a;
                st.push(c);
            }else{
                st.push(stoi(token));
            }
        }
        int ans = st.top();
        st.pop();
        return ans;
    }
};
