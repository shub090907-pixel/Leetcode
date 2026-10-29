class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
      
       vector<int> nums2=nums;
       for(int i=0;i<nums.size();i++){
        int sum=0;
        while(nums[i]!=0){
    int digit=nums[i]%10;
    nums[i]=nums[i]/10;
    sum=sum*10+digit;
        }
        nums2.push_back(sum);
       }
       sort(nums2.begin(),nums2.end());
       nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());

        return nums2.size();
    }
};