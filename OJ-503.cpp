/*************************************************************************
	> File Name: OJ-503.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Jun 2020 06:18:10 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int ans = 0, w, n, num[30005];
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    for (int i = n - 1; i >= 0; i--) {
        if (!num[i]) continue;
        ans++;
        for (int j = i - 1; j >= 0; j--) {
            if (num[j] && num[i] + num[j] <= w) {
                num[j] = 0;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
