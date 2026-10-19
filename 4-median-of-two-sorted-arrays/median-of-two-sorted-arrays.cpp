class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int m=  nums1.size();
       int n=  nums2.size();
        vector<int> nums3;
        int i=0;
        int j=0;
        while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }
        else{
            nums3.push_back(nums2[j]);
            j++;
        }
        }
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }
         while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        double ans;
        int total=m+n;
        if((m+n)%2==0){
    ans=(nums3[total/2-1]+nums3[total/2])/2.0;
        }
        else{
             ans=(nums3[total/2]);
        }
        return ans;
    }
};