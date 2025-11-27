// week04-2.cpp
// Leetcode 學習計畫10題 896. Monotonic Array
//陣列很單調， 只有增加 or 只有減少
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0; //
        for(int i=1; i<nums.size(); i++) { //倆倆比較
            if( nums[i-1] < nums[i] ) up =1; //增加
            if( nums[i-1] > nums[i] ) down =1; //減少
        }
        if(up==1 && down==1) return false; // 不可以又曾又減
        return true; // 沒有失敗，就成功
    }
};
