class Solution {
public:
    bool isPalindrome(string s) {
       string newz = "";
       for(char c:s){
        if(isalnum(c)){
       newz+=  tolower(c);
        }
       }

        string v=newz;
 int  count=newz.size();
    int n=0;
    int e=count-1;
    while(n<e){
        swap(v[n],v[e]);
        n++;
        e--;
    }
   for(int k=0;k<count;k++){
    if(v[k]!=newz[k]){
        return false;
    }
    
   }
   return true;
    }
};