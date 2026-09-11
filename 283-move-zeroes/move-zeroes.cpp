class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int s=0;
       for(int e=0;e<nums.size();e++){
         if (nums[e]!=0){
            swap(nums[s],nums[e]);
            s++;
         }
       }
        
    }
};