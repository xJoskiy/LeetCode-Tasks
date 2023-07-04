#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;

        sort(nums.begin(), nums.end());

        do{
            permutations.emplace_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return permutations;
    }
};