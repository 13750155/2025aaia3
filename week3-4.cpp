// week3-4.cpp
//leetcode �D���D 120. Triangle
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       // triangle[i][j] ��i�h����j�Ӽ�
       int N = triangle.size(); //�`�@���X�h
       //�q�U�����W�d�A�̤U����n-1�h�A�S���D�A�N�O�������̤p��
       for(int i=N-2; i>=0; i--){ // ��L�Ӫ��j��
          for(int j=0; j<=i; j++){ // �q����k
              triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
              //�C�ӤH�n�ݥ��U��2�ӿ��
          }
       }
       return triangle[0][0];
    }
};
