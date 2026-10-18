class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector<int> v;
       vector<int> tbp;
      int m=0;
       while(k>0) {
        int digit=k%10;
        k=k/10;
        m++;
        v.push_back(digit);
       }
       reverse(v.begin(),v.end());
     int n=  num.size();
       int i=m-1;
       int j=n-1;
       int carry=0;
       int sum,blu;
       while(i>=0 && j>=0){
       sum=v[i]+num[j]+carry;
       carry=sum/10;
     blu=sum%10;
     tbp.push_back(blu);
     i--;
     j--;
       }
       while(i>=0){
        sum=v[i]+carry;
         carry=sum/10;
     blu=sum%10;
     tbp.push_back(blu);
     i--;
       }
       while(j>=0){
        sum=num[j]+carry;
         carry=sum/10;
     blu=sum%10;
     tbp.push_back(blu);
     j--;
       }
       while(carry!=0){
        tbp.push_back(carry);
        carry=0;
       }
       reverse(tbp.begin(),tbp.end());
       return tbp;
    }
};