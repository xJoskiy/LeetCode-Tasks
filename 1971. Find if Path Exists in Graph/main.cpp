#include <iostream>
#include "BFS.h"

int main()
{
	vector<vector<int>> list{ {0, 1}, { 1, 2 }, { 2, 0 } };

	Solution solution;

	cout << solution.validPath(3, list, 0, 2);

	return 0;
}