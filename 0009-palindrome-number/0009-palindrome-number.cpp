class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long revNum = 0;

        while (x > 0) {
            int lastDigit = x % 10;
            revNum = revNum * 10 + lastDigit;
            x = x / 10;
        }

        return original == revNum;
    }
};