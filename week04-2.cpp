// week04-2.cpp
// Leetcode �ǲ߭p�e10�D 896. Monotonic Array
//�}�C�ܳ�աA �u���W�[ or �u�����
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0; //
        for(int i=1; i<nums.size(); i++) { //�ǭǤ��
            if( nums[i-1] < nums[i] ) up =1; //�W�[
            if( nums[i-1] > nums[i] ) down =1; //���
        }
        if(up==1 && down==1) return false; // ���i�H�S���S��
        return true; // �S�����ѡA�N���\
    }
};
