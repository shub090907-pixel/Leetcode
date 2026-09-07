class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int k=nums.size()-1;
        int e=nums.size()-1;
        int mid;
        while(s<e){
mid=s+(e-s)/2;

if(nums[mid]<nums[k]){
    e=mid;
}
else{
    s=mid+1;
}

        }
        return nums[s];
        

    }
};