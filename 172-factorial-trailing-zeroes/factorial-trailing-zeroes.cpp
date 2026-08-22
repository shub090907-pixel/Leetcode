class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        if(n>=0){
            sum=sum+n/5+n/25+n/125+n/625+n/3125;
        }return sum;
        
    }
};