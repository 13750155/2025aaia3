// week06-3.cpp
// Leetcode 學習計畫 simulation 模擬 第1題 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations) { // c++ 進階迴圈
            //cout << op << "\n";        // 試試看，會印出來什麼東西
            if (op[0] == '+') {        // 把兩樹相加
                int temp = a.back(); //先記下最後一項
                a.pop_back();// 暫時吐掉
                int temp2 = a.back();// 在記下最後兩頁
                a.push_back(temp);// 把剛剛最後1巷塞回去
                a.push_back(temp + temp2);// 兩樹相加
            } else if (op[0] == 'D') { // 複製最後一位
                a.push_back(a.back() * 2);
            } else if (op[0] == 'C') {// 吐掉最後一位
                a.pop_back();
            } else { // 把stoi 整數塞回去
                a.push_back(stoi(op));
            }
        } //
        int ans = 0;
        for (int now : a) {
            ans += now;
        }
        return ans; // 先隨便return 0 等等再改
    }
};
