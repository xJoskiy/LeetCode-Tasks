class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        while (matrix.size() > 1) {
            compress(matrix);
        }

        return *std::min_element(matrix[0].begin(), matrix[0].end());
    }
    
    void compress(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix[0].size(); ++i) {
            if (i == 0) matrix[1][i] += std::min(matrix[0][i], matrix[0][i + 1]);
            else if (i == matrix[0].size() - 1) matrix[1][i] += std::min(matrix[0][i - 1], matrix[0][i]);
            else matrix[1][i] += std::min({matrix[0][i - 1], matrix[0][i], matrix[0][i + 1]});
        }

        matrix.erase(matrix.begin());
    }
};