class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        
        int count=0;
        if(nums.size()==1){
            return 1;
        }
        else{
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i+1]<=nums[i]){
                    count++;
                }
            }
            else if(i==nums.size()-1){
                if(nums[i-1]<=nums[i]){
                    count++;
                }
            }
            else if (nums[i-1]+nums[i+1]<=2*nums[i]){
                count++;
            }

        }
    }
        return count;
    }
};