class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> count;
        vector<int> ans;
        for(auto i=nums1.begin(); i!=nums1.end();++i){
            if(find(nums2.begin(), nums2.end(), *i) != nums2.end())
                count.insert(*i);
        }
        for(auto i=count.begin();i!=count.end();++i){
            ans.push_back(*i);
        }
        return ans;
    }
};
