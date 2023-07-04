#pragma once

#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid, l = 0, r = matrix.size() * matrix[0].size() - 1;
        int rows = matrix.size(), cols = matrix[0].size();
        while (l <= r) {
            mid = (r + l) / 2;
            if (matrix[mid / cols][mid % cols] > target) r = mid - 1;
            if (matrix[mid / cols][mid % cols] < target) l = mid + 1;
            if (matrix[mid / cols][mid % cols] == target) return true;
        }

        return false;
    }
};