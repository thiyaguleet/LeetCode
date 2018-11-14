class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> unique;
        for(auto i=nums.begin(); i!=nums.end();++i){
            unique[*i]+=1;
            if (unique[*i]>1)
                return true;
        }
        return false;
    }
};
