#include <vector>
#include <cmath>

using namespace std;

#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int max_ = nums[0], min_ = nums[0];
        int total_max = max_;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < 0) swap(max_, min_);

            max_ = max(nums[i] * max_, nums[i]);
            min_ = min(nums[i] * min_, nums[i]);

            total_max = max(max_, total_max);
        }

        return max_;
    }
};