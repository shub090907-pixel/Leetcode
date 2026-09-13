class Solution {
public:
    int majorityElement(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int req=nums[mid];
        return req;
    }
};