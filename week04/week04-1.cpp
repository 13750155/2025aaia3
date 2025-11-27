// week04-1.cpp 家览肈酚肈ヘ糶
// Leetcode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange) { // 狦瞺计 >= 传秖
            numBottles = numBottles - numExchange +1;// 传1瞺都
            ans ++ ; //瞺
            numExchange ++; //传秖夹非瞺
        }
        return ans;
    }
};
