//week03-2b.cpp �G�X�A�n�g�⦸
// Leetcode�ǲ߭p�e��8�D 1822 Sign of the Product of an Array
// ��}�C���_�ӡA�ݬO���ơA�t�ơA�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
    int ans = 1; //�L��0������ơA���|�ܦ�0�A�u��1�̨�
    for(int i=0; i<nums.size(); i++) {//�ݦ��X�ӼơA�j��]�X��
        if(nums[i]>0) ans *= +1;
        if(nums[i]<0) ans *= -1;
        if(nums[i]==0) ans *= 0;
    } //�Ʀr�V�j�A1000�ӼƦr�A����@�b
    if(ans>0) return 1;
    if(ans<0) return -1;
    return 0;
    }
};
