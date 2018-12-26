class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int N1 = nums1.size(), N2= nums2.size();
        int i=0, j=0;
        vector<int> intersection;
        while(i<N1 && j<N2)
        {
            if (nums1[i]<nums2[j])
            {
                i++;
            }else if (nums1[i]>nums2[j])
            {
                j++;
            }else
            {
                if(!intersection.size() || intersection.back() != nums1[i]) 
                    intersection.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return intersection;
    }
};



class Solution {
public:
    bool binary(vector<int> nums, int target){
        int low=0, high=nums.size()-1, mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> out;
        if(nums1.size()>=nums2.size()){
            sort(nums1.begin(), nums1.end());
            for(auto i:nums2){
                if(binary(nums1, i)) out.insert(i);
            }
        }
        else{
            for(auto i:nums1){
                sort(nums2.begin(), nums2.end());
                if(binary(nums2, i)) out.insert(i);
            }
        }
        vector<int> out2;
        for(auto i: out) out2.push_back(i);
        return out2;
    }
};
