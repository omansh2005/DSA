class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) 
        {
            return false;
        }
        
        int reversedHalf = 0;
        int original = x;
        
        while (original > reversedHalf) {
            reversedHalf = (reversedHalf * 10) + (original % 10);
            original /= 10;
        }
        return original == reversedHalf || original == reversedHalf / 10;
    }
};