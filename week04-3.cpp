// week04-3.cpp
// Leetcode �ǲ߭p�e7�D 66. Plus One
// 123
//   4 �̥k��}�l+1
// 4321
//    2 �̥k��}�l+1
// 949
//   0���i��
//  5�̥k��+1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N  =digits.size(); // �W�g�йL
        for(int i=N-1; i>=0; i--) { // �˹L��
            if (digits[i]==9) { // �n�i��
                digits[i] = 0; //�]0
            } else { // ���ζi��
                digits[i]++; // ²��+1
                return digits;// ���ɦC����
            }
        }
        digits.insert( digits.begin(), 1 );// �̥��䴡�J1
        return digits;// ����


    }
};
