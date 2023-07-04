#include <iostream>
#include <vector>
#include "Rotate.h"

int main()
{
    vector<vector<int>> matrix{ {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    Solution solution;
    solution.rotate(matrix);
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";

        cout << endl;
    }

    bool a = 1;
    return 0;
}
