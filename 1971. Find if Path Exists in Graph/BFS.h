#pragma once

#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
	bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
	{

		vector<vector<int>> vertices;
		vector<bool> visited(n, false);
		stack<int> stack;

		vertices.resize(n);

		if (edges.size())
		{
			for (vector<int> pair : edges)
			{
				vertices[pair[0]].push_back(pair[1]);
				vertices[pair[1]].push_back(pair[0]);
			}
		}

		stack.push(source);
		while (!stack.empty())
		{
			source = stack.top();
			visited[source] = true;
			stack.pop();

			for (int vertex : vertices[source])
				if (!visited[vertex])
					stack.push(vertex);
		};

		return visited[destination];
	}
};

