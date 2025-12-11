// week08-1.cpp Leetcode 學習計畫 matrix 矩陣第一題
// 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (int i=0; i<accounts.size(); i++){
            int now = 0;
            for (int j=0; j<accounts[0].size(); j++){
                now += accounts[i][j];
            } // 迴圈裡面更新now 陣列左手i 右手j
            // 迴圈裏面 now 拿來用
            ans = max(ans, now); // 最有錢的人，更新答案
        }
        return ans;
    }
};
