#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution {
public:
	int maxPoints(vector<vector<int>>& points)
	{
		size_t count = 0;
		for (size_t i = 0; i < points.size(); i++)
		{
			for (size_t j = 0; j < points.size(); j++)
			{
				unordered_map<double, size_t> slope;
				if (i == j) { continue; }
				int X = points[i][0] - points[j][0];
				int Y = points[i][1] - points[j][1];
				slope[(double)Y / (double)X]++;
				count = max(count, slope[(double)Y / (double)X]);
			}
		}


		return min(count + 1, points.size());

	}
};