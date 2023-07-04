#include <iostream>
#include "MaxPoints.h"
#include <vector>

using namespace std;

int main()
{
    Solution solution;
    vector<vector<int>> points{ {1, 1}, {2, 2}, {2, 2}, {3, 3}};

    cout << solution.maxPoints(points);

    return 0;
}
