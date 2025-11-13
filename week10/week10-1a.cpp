// week10-1a.cpp 寫2次 地1次 用for 迴圈第二促用數學
//1523. Count Odd Numbers in an Interval Range
// 從 low ... high 裡面有幾個od基數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0 ;
        for (int i=low; i<=high; i++){
            if (i%2==1) ans++; // 基數
        }
        return ans;
    }
};
