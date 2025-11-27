/// week05-3c.cpp
///part 3 stringstream
///part 5 火車頭+車廂+車廂
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
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while ( ss >> word ) {
            reverse( word.begin(), word.end() );
            cout << " " << word;
        }
        cout << endl; ///part 2: output
    }
}
