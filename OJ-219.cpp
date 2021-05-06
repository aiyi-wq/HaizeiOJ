/*************************************************************************
	> File Name: OJ-219.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 19 May 2020 12:10:33 PM CST
 ************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int num[10005] = {0};

int cmp1(int a, int b) {
    return a > b;
}

int cmp2(int c, int d) {
    return c < d;
}

int main() {
    int N, l1, r1, l2, r2;
    cin >> N >> l1 >> r1 >> l2 >> r2;
    for (int i = 1; i <= N; i++) {
        cin >> num[i];
    }
    sort(num + l1, num + r1 + 1, cmp2);
    sort(num + l2, num + r2 + 1, cmp1);
    for (int i = 1; i <= N; i++) {
        (i == 1) && cout << num[1];
        (i != 1) && cout << " " << num[i];
    }
    cout << endl;
    return 0;
}
