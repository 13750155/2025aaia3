// week08-2.cpp Leetcode 學習計畫 matrix 矩陣第4題
// 73. Set Matrix Zeroes
// 要小心 不能一邊讀 一遍遍0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第一階段先讀完記得全部的齡對應
        int M = matrix.size(), N = matrix[0].size();
        vector<int> markI(M, 0), markJ(N, 0);
        for (int i=0; i< M; i++) {
            for (int j=0; j< N; j++){
                if (matrix[i][j]==0) { // 藥劑下對應數
                    markI[i] = 1; // 標記一下i的那條直線
                    markJ[j] = 1; // 標記一下j的那條直線
                }
            }
        }
        // 第2階段，再照著markI和 markJ 的標記
        for (int i=0; i < M; i++) {
            for (int j=0; j < N ; j++) {
                if (markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            } // 如果有標記，在他對應的向變成0
        }
    }
};
