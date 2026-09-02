class Solution {
public:
    bool isPalindrome(int n) {
long long int sum=0;
int k=n;
if(n<0){
    return false;
}
while(n!=0){
int digit=n%10;
 n=n/10;
sum=sum*10+digit;
}
if(sum==k){
    return true;
}
 else{
    return false;
 }
    }


};