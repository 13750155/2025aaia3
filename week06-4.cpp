// week06-4.cpp
// Leetcode 學習計畫 simulation 模擬 第2題 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; //一開始在原點0
       for(char c : moves){// c++ 的進階
           if(c=='U'){ //往上
               y++;
           }else if(c=='D'){ // 往下
               y--;
           }else if(c=='L'){ // 往左
               x--;
           }else if(c=='R'){ // 往右
               x++;
           }
       }
       if(x==0 && y==0) return true;
       else return false;
    }
};
