class Solution {
public:
    bool validPalindrome(string s) {
       
        int count1 = 0;
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                count1++;
                i++; 
            }
        }
        if (count1 <= 1) return true;

       
        int count2 = 0;
        i = 0;
        j = s.size() - 1;
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                count2++;
                j--; 
            }
        }
        if (count2 <= 1) return true;

        return false;
    }
};