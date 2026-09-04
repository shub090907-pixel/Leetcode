class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int g=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>=g){
                g=piles[i];
            }
        }
int s=1;
int e=g;


while(s<e){
int mid=s+(e-s)/2;
long long hours=0;
for (int pile : piles) {
                hours += (pile + mid - 1) / mid;  
            }
if (hours<=h){

    e=mid;
}
else{
    s=mid+1;
}
}

return s;

    }
};