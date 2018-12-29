class Solution {
public:
    string decodeString(string s) {
        stack<char> str;
        stack<int> num;
        int count=0;
        string result="", temp="";
        for(int i=0; i<s.length(); i++){
            count=0;
            if(s[i]>='0' && s[i]<='9'){
                while(s[i]>='0' && s[i]<='9'){
                    count=count*10+(s[i]-'0');
                    i++;
                }
                i--;
                num.push(count);
            }
            else if(s[i]==']'){
                temp="";
                count=0;
                count=num.top(); num.pop();
                
                while(!str.empty() && str.top()!='['){
                    temp=str.top()+temp;
                    str.pop();
                }
                if(str.top()=='[') str.pop();
                
                if(! str.empty() && str.top()==']') str.pop();
                for(int j=0; j<count;j++) result+=temp;
                for(auto c:result) str.push(c);
                result="";
            }
            else str.push(s[i]);
        }
        while (! str.empty()) { 
        result = str.top() + result; 
        str.pop(); 
        } 
        return result; 
    } 
};
