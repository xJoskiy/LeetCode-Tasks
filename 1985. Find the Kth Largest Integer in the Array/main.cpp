#include <iostream>

#include "Solution.h"

int main() {
    Solution sol;
    vector<string> s{"5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5", "5"};
    sol.kthLargestNumber(s, 10);
    for (auto x : s) cout << x;
    return 0;
}