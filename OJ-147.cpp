/*************************************************************************
	> File Name: OJ-147.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 22 May 2020 01:05:30 PM CST
 ************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if ((str[str.size() - 1]- '0') % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
