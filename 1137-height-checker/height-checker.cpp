class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
       vector<int> arr2 = heights;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=arr2[i]){
                count++;
            }
        }
        return count;
    }
};