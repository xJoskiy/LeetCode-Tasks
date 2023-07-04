#include <iostream>
#include <functional>
#include "Permutations.h"

using namespace std;


int main()
{
    Solution solution;
    vector<int> nums{ 0, -1, 1 };
    vector<vector<int>> permutations = solution.permute(nums);
    for (auto permutation : permutations)
        for (auto val : permutation)
            cout << val;


    return 0;
}
