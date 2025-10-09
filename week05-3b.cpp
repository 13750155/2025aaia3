/// week05-3b.cpp
///CPE 第2題 UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line; /// 一行字的字串

    while ( getline(cin, line) ) { ///讀近來
        stringstream ss(line);
        string word;
        while ( ss >> word ) {
            reverse( word.begin(), word.end() );
            cout << "讀到了" << word << endl;
        }
        cout << line << endl; ///part 2: output
    }
}
