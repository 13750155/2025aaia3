// week02-5.cpp Leetcode �ǲ߭p�e��2�D
// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����A�έp�@�U 26�Ӧr���A�X�{�X��
        int A [256] = {}; //�}�C�ŧi�A�}�C�Τj�A�����w�]��0
        for(int i=0; i<s.length(); i++){
            char c =s[i]; //����i�Ӧr��
            A[c]++; //���� ��i�������r����l��
        }
        for(int i=0; i<t.length(); i++){
            char c =t[i]; //����i�Ӧr��
            A[c]--; //�q��l�̮��r��
            if(A[c] < 0) return c; // �r�������ΡA �N�O�L
        }
        return 0;
    }
};
