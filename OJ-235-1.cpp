/*************************************************************************
	> File Name: OJ-235.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Aug 2020 06:38:04 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], deep = 1;

void p(int x) {
    for (int i = 1; i < x; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int start, int x) {
    for (int i = start; i <= x; i++) {
        num[deep++] = i;
        p(deep);
        //递归下一层
        func(i + 1, deep);
    }
}

int main() {
    cin >> n;
    func(1, 1);
    return 0;
}
