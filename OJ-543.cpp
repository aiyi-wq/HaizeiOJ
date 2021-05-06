/*************************************************************************
	> File Name: OJ-534.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 16 Jun 2020 05:14:03 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[25], check[1005] = {1}, ans = 0;

void func(int s, int sum) {
    if (check[sum] == 0) {
        ans++;
        check[sum] = 1;
    }
    for (int i = s; i < n; i++) {
        sum += num[i];
        func(i + 1, sum);
        sum -= num[i];
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    func(0, 0);
    cout << ans << endl;
    return 0;
}
