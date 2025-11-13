// week10-2.cpp
// 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; // р羱常癬ㄓ
        int N = salary.size(); // 羆Τ碭n
        int M = salary[0], m = salary[0];// р材0く 讽程
        for (int i=0; i<N; i++){
            total += salary[i];// р羱常癬ㄓ
            if (salary[i]>M) M = salary[i]; // ゑ程 ゑ糒
            if (salary[i]<m) m = salary[i];
        }
        //return total / N;
        return (total - M -m) / (N-2); // 纗ㄢ
    }
};
