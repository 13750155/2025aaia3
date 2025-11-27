// week12-4.cpp 學習計畫 math 倒數第4題
// Leetcode 1232. Check If It Is a Straight Line
// 測一下所有的點是不是同一條線
// 斜率 a:b = c:d
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];
        int dx = x1 - x0, dy = y1 - y0; // dx是x 的差值
        for (int i=2; i<coordinates.size(); i++) {
            int xx = coordinates[i][0], yy = coordinates[i][1];
            if ( dx*(yy-y0) != dy*(xx-x0) ) return false;
        }
         return true;
    }
};
