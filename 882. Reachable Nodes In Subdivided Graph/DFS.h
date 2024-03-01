#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<vector<int>> graph(n);
        for (auto& edge : edges) {
            size_t split_cnt = edge[2];
            graph.insert(graph.end(), split_cnt, vector<int>{});
            vector<int> temp(split_cnt);
            iota(temp.begin(), temp.end(), n);
            temp.insert(temp.begin(), edge[0]);
            temp.push_back(edge[1]);

            for (auto it = temp.begin(); it != prev(temp.end()); it++) 
                graph[*it].push_back(*(it + 1));

            for (auto it = temp.rbegin(); it != prev(temp.rend()); it++)
                graph[*it].push_back(*(it + 1));

            n += split_cnt;
        }

        size_t reachable = 0;
        vector<int> visited(n), avMoves(n);
        dfs(graph, visited, 0, reachable, avMoves, maxMoves);
        return reachable;
    }

    void dfs(const vector<vector<int>>& graph, vector<int>& visited, size_t start, size_t& reachable, vector<int>& avMoves, size_t maxMoves) {
        if (visited[start] == 0) {
            visited[start] = 1;
            ++reachable;
        }

        avMoves[start] = maxMoves;
        if (maxMoves == 0) return;
        for (auto vert : graph[start]) {
            if (maxMoves - 1 >= avMoves[vert])
                dfs(graph, visited, vert, reachable, avMoves, maxMoves - 1);
        }
    }
};
