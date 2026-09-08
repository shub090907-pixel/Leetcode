class Solution {
public:
    bool check(vector<int>& nums) {
        int check=5;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
if(nums[i]>nums[(i+1)%n]){
    check=check-1;
}
        }
if(check>=4){
    return true;
}
else{
    return false;
}
        
    }
};