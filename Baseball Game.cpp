class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> points;
        int sum=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]!="+" && ops[i]!="C" && ops[i]!="D"){
                points.push(stoi(ops[i]));
            }
            else if(ops[i]=="+"){
                int val=points.top();
                points.pop();
                int val2=val+points.top();
                points.push(val);
                points.push(val2);
            }
            else if(ops[i]=="C"){
                points.pop();
            }
            else if(ops[i]=="D"){
                points.push(points.top()*2);
            }
        }
        while(!points.empty()) {
            sum+=points.top();
            points.pop();
        }
        return sum;
    }
};
