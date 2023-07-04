#include <cmath>

#pragma once
class Solution {
public:
	double myPow(double x, int n) {
		double product = 1.0;
		int bits = n == 0 ? 1 : log2(abs((long long int)n)) + 1;
		while (bits)
		{
			product *= product;
			if (abs(n) & (1 << bits-- - 1))
				product *= x;
		}

		return n > 0 ? product : (double)1 / product;
	}
};

