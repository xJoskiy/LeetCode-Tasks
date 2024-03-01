#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#include "Solution.h"

int main() {
    Solution sol;
    vector<vector<int>> matrix { {17, 82}, {1, -44} };
    cout << sol.minFallingPathSum(matrix);

    return 0;
}