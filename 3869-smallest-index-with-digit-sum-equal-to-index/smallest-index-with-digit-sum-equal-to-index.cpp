class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum;
        for(int i=0;i<nums.size();i++){
         sum=0;
          int digit=nums[i];

           for(int j=0;j<5;j++)  {
           
            int last=digit%10;
            digit /=10;
             sum=sum+last;
           }
           if (sum==i){
            return i;
           }

        }
        return -1;
    }
};