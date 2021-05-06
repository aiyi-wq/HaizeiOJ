/*************************************************************************
	> File Name: OJ-514.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 07:10:20 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int ans, n, num[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int func(int x) {
    if (x == 0) return 6;
    int cnt = 0;
    while (x) {
        cnt += num[x % 10];
        x /= 10;
    }
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i <= 1111; ++i) {
        for (int j = 0; j <= 1111; ++j) {
            if (func(i) + func(j) + func(i + j) + 4 == n) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
