#include "SearchMatrix.h"
#include <iostream>

using namespace std;

int main()
{
    Solution solution;
    vector<vector<int>> matrix{ {1, 2} };
    cout << solution.searchMatrix(matrix, -1);

    return 0;
}
