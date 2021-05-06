/*************************************************************************
	> File Name: OJ-236.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Aug 2020 07:23:44 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, num[15], cnt = 1;

void p() {
    for (int i = 1; i <= m; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << num[i];
    }
    cout << endl;
}

void func(int start, int left) {
    if (left == 0) {
        p();
        return ;
    }
    for (int i = start; i <= n - left + 1; i++) {
        num[cnt++] = i;
        func(i + 1, left - 1);
        cnt--;
    }
}

int main() {
    cin >> n >> m;
    func(1, m);
    return 0;
}
