#include <vector>

using namespace std;

#include "DFS.h"

int main() {
    Solution sol;
    vector<vector<int>> edges{};
    cout << sol.reachableNodes(edges, 2166, 300) << endl;

    return 0;
}