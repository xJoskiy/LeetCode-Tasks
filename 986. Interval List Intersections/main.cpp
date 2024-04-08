#include "Solution.h"

int main() {
    Solution sol;
    std::vector<std::vector<int>> list1 {{0, 2}, {5, 10}, {13, 23}, {24, 25}};
    std::vector<std::vector<int>> list2 {{1, 5}, {8, 12}, {15, 24}, {25, 26}};
    auto res = sol.intervalIntersection(list1, list2);

    return 0;
}