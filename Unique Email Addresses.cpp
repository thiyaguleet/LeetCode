#include <algorithm>
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> unique;
        for(auto email: emails){
            int at=email.find('@');
            email.erase(remove(email.begin(), email.begin()+at,  '.'), email.begin()+at);
            at=email.find('@');
            int plus=email.find('+');
            if(plus!=-1) email.erase (email.begin()+plus, email.begin()+at);
            unique.insert(email);
        }
        return unique.size();
    }
};

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> hash;
        for(string& str : emails){
            string tmp;
            for(int i = 0; i < str.length();){
                if(str[i] == '+'){
                    while(str[i] != '@') ++ i;
                    while(i < str.length()) tmp.push_back(str[i ++]);
                }
                else if(str[i] == '.') ++ i;
                else tmp.push_back(str[i ++]);
            }
            hash.insert(tmp);
        }
        return hash.size();
    }
};
