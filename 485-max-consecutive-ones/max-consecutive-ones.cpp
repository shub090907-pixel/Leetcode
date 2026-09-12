class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int req=0;
        for(int i=0;i<nums.size();i++){
               if(nums[i]==1){
                max=max+1;
               }
              else{
                if(max>req){
                    req=max;
                }
                max=0;
            
                
              }
              

        }
        return std::max(req,max);
    }
};