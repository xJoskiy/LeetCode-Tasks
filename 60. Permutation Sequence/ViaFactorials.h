#include <string>
#include <vector>
#include <cmath>
#include <functional>

using namespace std;

class Solution {
public:
	string getPermutation(int n, int k) {
		string ans = "";
		vector<int> nums;
		int div; --k;
		std::function<int(int)> fact = [&fact](int N)
		{
			return N == 0 ? 1 : N * fact(N - 1);
		};

		for (int i = 1; i < n + 1; ++i)
			nums.push_back(i);

		while (!nums.empty())
		{
			
			div = fact(nums.size() - 1);
			ans.append(to_string(nums[k / div]));
			nums.erase(nums.begin() + k / div);
			k %= div; 
		}

		return ans;
	}
};