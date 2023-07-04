#include <cmath>

class Solution {
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == divisor) return 1;
        if (divisor == 1) return dividend;

        bool isPositive = dividend > 0 == divisor > 0;

        if (abs(divisor) == 2) return (abs(dividend) >> 1) * (isPositive ? 1 : -1);

        long int bitMove, ans = 0;

        unsigned divdnd = abs(dividend);
        unsigned divsr = abs(divisor);

        while (divdnd >= divsr)
        {
            bitMove = 0;
            while (divsr * (1 << bitMove + 1) < divdnd)
                bitMove++;

            ans += 1 << bitMove;
            divdnd -= divsr * (1 << bitMove);
        }

        if (ans == 1 << 31 and isPositive) return INT32_MAX;

        return isPositive ? ans : -ans;
    }
};