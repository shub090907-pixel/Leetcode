class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy=INT_MAX;
        int diff=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else if(prices[i]-buy>diff){
                diff=prices[i]-buy;
            }
        }
       
        return diff;
    }
};