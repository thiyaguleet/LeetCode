class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> count;
        for(auto i=nums.begin(); i!=nums.end();++i){
            count[*i]+=1;
            if(count[*i]>nums.size()/2)
                return *i;
        }
    }
};
