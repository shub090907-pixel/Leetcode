class Solution {
public:
    bool isPowerOfTwo(int32_t n) {
        for(int i=0;i<31;i++){
if(n==pow(2,i)){
    return 1;
}

        }
   return 0; };
};
    
