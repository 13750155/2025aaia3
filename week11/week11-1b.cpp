// week11-1b.cpp
// SOIT106_ADVANCE_0047
#include <iostream>
using namespace std;

int main()
{
	char c;
	while (cin >> c) {
		if (c>='A' && c<='&') c = c - 'A' + 'a';
		else if(c>='a' && c<='z') c = c - 'a' + 'A';
		cout << c;
	}
	cout << "\n";
}
