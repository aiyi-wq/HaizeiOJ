/*************************************************************************
	> File Name: OJ-56.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 02 Jun 2020 06:12:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int num[15];
int fac[15];

void init() {
    fac[0] = 1;
    num[0] = 1;
    for (int i = 1; i < 10; i++) {
        fac[i] = i * fac[i - 1];
        num[i] = 1;
    }
    return ;
}

int get_num(int k, int val, int &x) {
    int step = k / val;
    for (int t = 0; t <= step; x += (t <= step)) {
        t += num[x];
    }
    num[x] = 0;
    k %= val;
    return k;
}

int main() {
    init();
    int x, y;
    cin >> x >> y;
    y -= 1;
    for (int i = x - 1; i >= 0; i--) {
        int m = 0;
        y = get_num(y, fac[i], m);
        cout << m;
    }
    cout << endl;
    return 0;
}
