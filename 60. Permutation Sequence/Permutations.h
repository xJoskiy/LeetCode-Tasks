#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	string getPermutation(int n, int k) {
		string permut;
		for (size_t i = 1; i < n + 1; i++)
			permut.append(to_string(i));
		while (--k)
			next_permutation(permut.begin(), permut.end());

		return permut;
	}
};