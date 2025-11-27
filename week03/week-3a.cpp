// week-3a.cpp 二合一的第一種方法
// Leetcode 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; //用來放不是0的樹
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) ans.push_back(nums[i]);
        }//把上面不是0的樹暫時放在ans裡
        //再用for 迴圈放進去
        for(int i=0; i<nums.size(); i++) {
            if(i < ans.size())nums[i] = ans[i]; ///塞回去
            else nums[i] = 0;
        }
    }
};
