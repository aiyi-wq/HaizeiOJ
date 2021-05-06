/*************************************************************************
	> File Name: OJ-590-timeout.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 18 Oct 2020 11:29:42 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
int n, m, num[1005][1005], utd[1005][1005], dtu[1005][1005], sum[1005][1005], ans[1005][3];//0:max的值， 1是max的下标， 2是submax的值

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cin >> num[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            utd[i][j] = max(utd[i - 1][j - 1], utd[i - 1][j]) + num[i][j];
        }
    }
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            dtu[i][j] = max(dtu[i + 1][j + 1], dtu[i + 1][j]) + num[i][j];
            sum[i][j] = utd[i][j] + dtu[i][j] - num[i][j];
        }
    }

    for (int i = 2; i <= n; ++i) {
        int x = 0, y = 0;
        for (int j = 1; j <= i; ++j) {
            if (sum[i][j] > sum[i][x]) {
                ans[i][0] = sum[i][j];
                ans[i][1] = j;
                x = j;
            }
        }
        for (int j = 1; j <= i; ++j) {
            if (j != x && sum[i][j] > sum[i][y]) {
                ans[i][2] = sum[i][j];
                y = j;
            }
        }
    }
    /*for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        if (a == 1 && b == 1) {
            cout << -1 << endl;
        } else {
            if (ans[a][1] == b) {
                cout << ans[a][2] << endl;
            } else {
                cout << ans[a][0] << endl;
            }
        }
    } //if else 分支语句太多，导致了超时，需要改进 */

    int a, b;
    while (m--) {
        cin >> a >> b;
        if (a == 1 && b == 1) {
            cout << -1 << endl;
            continue;
        }
        printf("%d\n", ans[a][1] == b ? ans[a][2] : ans[a][0]);
    }
    return 0;
}
