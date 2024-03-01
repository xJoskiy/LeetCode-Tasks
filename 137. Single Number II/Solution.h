#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < 32; i++) {
            int sum = 0;
            for (int& x : nums)
                if ((1 << i) & x) sum++;
            if (sum % 3 == 1)
                res |= (1 << i);
        }

            
        return res;
    }
};