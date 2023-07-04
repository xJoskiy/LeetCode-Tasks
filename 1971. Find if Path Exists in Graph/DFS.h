#pragma once

#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
	bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
	{

		vector<vector<int>> vertices;
		vector<bool> visited(n, false);
		queue<int> queue;

		vertices.resize(n);

		if (edges.size())
		{
			for (vector<int> pair : edges)
			{
				vertices[pair[0]].push_back(pair[1]);
				vertices[pair[1]].push_back(pair[0]);
			}
		}

		queue.push(source);

		while (queue.size())
		{
			source = queue.front();
			for (auto vertex : vertices[source])
				if (!visited[source])
					queue.push(vertex);

			visited[source] = true;
			queue.pop();
		};

		return visited[destination];
	}
};

