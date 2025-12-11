// week07-4.cpp 學習計畫 simulation 第4題
// 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions +instructions +instructions +instructions;//走4次
        cout << instructions;
        int x = 0, y=0;
        int d = 0; // d:方向direction 0:北 1:東 2:南 4:西
        // 右轉 d = (d+1) % 4 取4的餘數
        // 左轉 d = (d-1+4) %4 = (d+3) % 4 竟然可以倒過來，太神奇了
        int dx[4] = {0, 1,0, -1}; // 前進1格時，會走x+= dx[d]
        int dy[4] = {1, 0,-1, 0};// 連兩行，是地圖2D模擬的精華
        for (char c : instructions) {
            if (c=='G'){ // 前進1格配合 dx[d] dy[d]前進
                x += dx[d];
                y += dy[d];
            } else if (c=='R') { // 右轉
                d = (d+1) % 4;
            } else if (c=='L') { //左轉
                d = (d+3) % 4;
            }
        }// 離開迴轉時
        cout << 'x'<< x << 'y' << y << endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
