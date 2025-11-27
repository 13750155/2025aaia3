// week12-2.cpp 學習計畫 math 第4題
// Leetcode 976. Largest Perimeter Triangle
// 找可構成三角形的三邊常加起來最大 兩邊和>第三邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());// 先有效率的
        // 先練習倒過來的迴圈，把大到小印出來
        for (int i=nums.size()-1; i>=2; i--) {
            if (nums[i] < nums[i-1] + nums[i-2]) {
                return nums[i] + nums[i-1] + nums[i-2];
            }
        }
        return 0;
    }
};
