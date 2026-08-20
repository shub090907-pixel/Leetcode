class Solution {
public:
    int reverse(int x) {
        int n=x;
        double sum=0;
    int rem;
        while(n!=0){
rem= n %10;
n=n/10;
sum=sum*10+rem;}
if(sum>   2147483647.00 ||    sum<= -2147483648.00){
    return 0;
}



        return sum;
    }
};