//week03-2b.cpp 璶糶ㄢΩ
// Leetcode厩策璸礶材8肈 1822 Sign of the Product of an Array
// р皚癬ㄓ琌タ计璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
    int ans = 1; //0ヴ计常穦跑Θ0Τ1程
    for(int i=0; i<nums.size(); i++) {//Τ碭计癹伴禲碭Ω
        if(nums[i]>0) ans *= +1;
        if(nums[i]<0) ans *= -1;
        if(nums[i]==0) ans *= 0;
    } //计禫1000计
    if(ans>0) return 1;
    if(ans<0) return -1;
    return 0;
    }
};
