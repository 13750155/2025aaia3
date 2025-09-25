// week3-4.cpp
//leetcode 挑戰題 120. Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       // triangle[i][j] 第i層的第j個數
       int N = triangle.size(); //總共有幾層
       //從下面往上查，最下面第n-1層，沒問題，就是本身的最小值
       for(int i=N-2; i>=0; i--){ // 到過來的迴圈
          for(int j=0; j<=i; j++){ // 從左到右
              triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
              //每個人要看它下面2個選擇
          }
       }
       return triangle[0][0];
    }
};
