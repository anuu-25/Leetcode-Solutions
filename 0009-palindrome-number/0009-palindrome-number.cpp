class Solution {
public:
    bool isPalindrome(int x) {
        int l, rev;
        long long num = 0;
        l = x;
        if (x < 0)
        {
            return false;
        }
        while(x != 0)
        {
            rev = x % 10;
            num = num * 10 + rev;
            x = x/10;
        }
        if (l == num)
        {
            return (true);
        }
        else
        {
            return (false);
        }
        return 0;
    }
};