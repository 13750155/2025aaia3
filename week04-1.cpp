// week04-1.cpp �����D�A�Ӫ��D�ؼg
// Leetcode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange) { // �p�G�~�l�� >= �I���q
            numBottles = numBottles - numExchange +1;// �I��1�~����
            ans ++ ; //�h�@�~
            numExchange ++; //�I���q���зǦh�@�~
        }
        return ans;
    }
};
