/*************************************************************************
	> File Name: OJ-166.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 24 May 2020 08:53:54 PM CST
 ************************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    string a, b;
    cin >> a >> n >> b;
    if (a.size() >= 100) {
        cout << "100" << endl;
    } else {
        cout << a.size() << endl;
    }
    a = a.insert(n - 1, b);
    cout << a << endl;
    for (int i = a.size() - 1, j = 1; i >= 0; i--, j++) {
        if (a[i] == 'x') {
            cout << j << endl;
            break;
        }
    }
    return 0;
}
