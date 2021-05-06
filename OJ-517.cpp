/*************************************************************************
	> File Name: OJ-517.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 22 Oct 2020 08:14:30 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n / 3; ++i) {
        for (int j = i; j <= (n - i) / 2; ++j) {
            if ((i + j) > (n - i - j)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
