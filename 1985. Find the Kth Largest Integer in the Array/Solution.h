#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct CompareStr {
    bool operator () (const string& s1, const string& s2) {
        if (s1.size() > s2.size()) return true;
        if (s1.size() < s2.size()) return false;
        if (s1.size() == 0 and s2.size() == 0) return true;
        if (s1[0] > s2[0]) return true;
        else if (s1[0] < s2[0]) return false;
        else return (*this)(string(next(s1.begin()),  s1.end()), string(next(s2.begin()),  s2.end()));
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), CompareStr());
        return nums[k - 1];
    }
};