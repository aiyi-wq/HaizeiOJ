/*************************************************************************
	> File Name: OJ-534.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 15 Oct 2020 06:09:20 PM CST
 ************************************************************************/
//OJ-235, OJ-236, OJ-237
#include<iostream>
using namespace std;
//排列组合
int n, sum, num[25], check[1005], ans;

void func(int s) {
    if (check[sum] == 0) {
        ans++;
        check[sum] = 1;
    }
    for (int i = s; i < n; i++) {
        sum += num[i];
        func(i + 1);
        sum -= num[i];
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    func(0);
    cout << ans - 1 << endl;
    return 0;
}
