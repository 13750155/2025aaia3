/// week05-2.cpp
/// 熟悉 stringstream
#include <iostream> ///cin cout getline
#include <sstream> /// stringstream
#include <string> /// string
using namespace std;
int main()
{
    cout << "請輸入一段英文, 裡面可有空格: ";
    string s; ///字串 s
    getline(cin, s); ///一次讀入一整行，放入s
    cout << "讀到了s字串:" << s << endl;

    stringstream ss (s);
    string word; /// 字串 word
    while ( ss >> word ) {
        cout << "有1個字:" << word << endl;
    }
}
