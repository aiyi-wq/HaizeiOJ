/*************************************************************************
	> File Name: OJ-515.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 07:30:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int a, b, l, ansa, ansb;
double cons1, cons2, ans = 10;
int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

int main() {
    cin >> a >> b >> l;
    cons2 = (double)a / b; //注意一定要在传入值后给它赋值
    for (int i = 1; i <= l; ++i) {
        for (int j = 1; j <= l; ++j) {
            cons1 = (double)i / j;
            if (gcd(i, j) != 1 || cons1 < cons2) continue;
            if ((cons1 - cons2) < ans) {
                ans = cons1 - cons2;
                ansa = i;
                ansb = j;
            }
        }
    }
    cout << ansa << " " << ansb << endl;
    return 0;
}
