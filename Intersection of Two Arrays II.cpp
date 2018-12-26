class Solution {
public:
    int binary(vector<int> nums, int target){
        int low=0, high=nums.size()-1, mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target) {
                return mid;
            }
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        if(nums1.size()>=nums2.size()){
            sort(nums1.begin(), nums1.end());
            for(auto i:nums2){
                int mid=binary(nums1, i);
                if(mid!=-1) {
                    out.push_back(i);
                    nums1.erase(nums1.begin()+mid);
                }
            }
        }
        else{
            for(auto i:nums1){
                sort(nums2.begin(), nums2.end());
                int mid=binary(nums2,i);
                if(mid!=-1) {
                    out.push_back(i);
                    nums2.erase(nums2.begin()+mid);
                }
            }
        }
        return out;
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int> counter;
        
        vector<int> retSet;
        
        for(int i=0;i<nums1.size();i++)
            counter[nums1[i]]++;
        
        for(int i=0;i<nums2.size();i++)
        {
            //cout<<counter[nums2[i]]<<'\n';
            if(counter[nums2[i]] > 0)
            {
                counter[nums2[i]]--;
                retSet.push_back(nums2[i]);
            }
        }
        
        return retSet;
    }
};
