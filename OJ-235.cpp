/*************************************************************************
	> File Name: OJ-235.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Aug 2020 06:38:04 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[15], cnt = 1;

void p() {
    for (int i = 1; i < cnt; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int start) {
    for (int i = start; i <= n; i++) {
        num[cnt] = i;
        cnt++;
        p();
        //递归下一层
        func(i + 1);
        cnt--;//回溯
    }
}

int main() {
    cin >> n;
    func(1);
    return 0;
}
