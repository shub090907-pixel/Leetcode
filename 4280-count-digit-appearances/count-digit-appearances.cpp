class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int digit2;
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
          digit2=nums[i]%10;
           if(digit2==digit){
            count++;
           }
           nums[i]=nums[i]/10;
            }
        }
        return count;
    }
};