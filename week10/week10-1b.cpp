// week10-1b.cpp 寫2次 地1次 用for 迴圈第二促用數學
//1523. Count Odd Numbers in an Interval Range
// 從 low ... high 裡面有幾個od基數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2; // 用數學基數佔一半
        if (high%2==1 || low%2==1) ans++;
        return ans;
    }
};
