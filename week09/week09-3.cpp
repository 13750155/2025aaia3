// week09-3.cpp
// Leetcode ¾Ç²ß­pµe 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        #include <vector>

using namespace std;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        vector<int> result;
        int total_elements = matrix.size() * matrix[0].size();

        while (result.size() < total_elements) {

            // 1. Left to Right
            for (int i = left; i <= right && result.size() < total_elements; ++i) {
                result.push_back(matrix[top][i]);
            }
            top++;

            // 2. Top to Bottom
            for (int i = top; i <= bottom && result.size() < total_elements; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--;

            // 3. Right to Left
            if (top <= bottom) {
                for (int i = right; i >= left && result.size() < total_elements; --i) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // 4. Bottom to Top
            if (left <= right) {
                for (int i = bottom; i >= top && result.size() < total_elements; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};
