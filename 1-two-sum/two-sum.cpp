class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
for (int start = 0; start < nums.size(); start++) {
    for(int j=start+1;j<nums.size();j++){
        if(nums[start]+nums[j]==target){
            return {start,j};
       

        }
    }


}return{};
    }
};