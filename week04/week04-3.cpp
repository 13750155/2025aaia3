// week04-3.cpp
// Leetcode 學習計畫7題 66. Plus One
// 123
//   4 最右邊開始+1
// 4321
//    2 最右邊開始+1
// 949
//   0有進位
//  5最右邊+1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N  =digits.size(); // 上週教過
        for(int i=N-1; i>=0; i--) { // 倒過來
            if (digits[i]==9) { // 要進位
                digits[i] = 0; //設0
            } else { // 不用進位
                digits[i]++; // 簡單+1
                return digits;// 把訰列當答案
            }
        }
        digits.insert( digits.begin(), 1 );// 最左邊插入1
        return digits;// 結束


    }
};
