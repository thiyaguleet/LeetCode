class Solution {
public:
    string frequencySort(string s) {
        if(s.length()<2) return s; 
        map <char, int> table;
        for(auto i: s) table[i]++;
        priority_queue<pair<int,char>> pq;
        for(auto i:table) pq.push(make_pair(i.second, i.first));
        string temp="";
        while(!pq.empty()){
            auto it=pq.top();
            for(int i=0; i<it.first; i++) temp+=it.second;
            pq.pop();
        }
        return temp;
    }
};
